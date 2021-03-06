%resolve a pair-collision, returning new sm position values
%in: the two smcle 5-tuples, flag whether to resolve or just check collisions
%out: T/F if just checking, list of new 3-tuples (cx,cy,theta) if resolving
function [xSm, currOrd,flipPar]=pairCollision(sm, resolveFl, fricCoeff, prevOrd) %#codegen
    global A B tRes;
    lenVc=[A,B,A]; %scales to get real-space distances
    lenMx=repmat(lenVc,3,1);
    trEps=0.1*tRes*B; maxAngle=tRes; parThresh=5*tRes; parShift=tRes*B; %perturbative scales
    % check for collisions:----------
    crd=smcle2coord(sm);
    currOrd=prevOrd; %order of parallel links - to know which way to shift next
%     currOrd(abs(currOrd)<0.1)=0; %decay over time and eventually forget
    flipPar=zeros(9,1);
%     cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); %axis([-0.5,0.5,-0.5,0.5]*12);
    inters = lineSegmentIntersect([crd(1,1:4); crd(1,3:6); crd(1,5:8)],[crd(2,1:4); crd(2,3:6); crd(2,5:8)],...
        parThresh*B^2, parThresh*B/2,lenMx); %max value of cross-product and separation for parallel
    if ~(any(any(inters.intAdjacencyMatrix)) || any(any(inters.parAdjacencyMatrix))); xSm=zeros(2,3); return; end %if no collision, return false
    if(~resolveFl); xSm=ones(2,3); return; end %if just checking for collisions

    % find out the type of interaction:===============
    xSm=sm(:,1:3); %setup the identity map
    
    % Separate any parallel links if present-------
%     cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); %axis([-0.5,0.5,-0.5,0.5]*12);
    [par1,par2]=find(inters.parAdjacencyMatrix); %get parallel nearby lines
    parX=[par1,par2];
    if(~isempty(par1)) %number of parallel line
%       cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); %axis([-0.5,0.5,-0.5,0.5]*12);  
      mv=1+((fricCoeff(2)-fricCoeff(1))/(fricCoeff(2)+fricCoeff(1))<0.5*(rand-0.5)); %move the one with smaller fricCoeff
      fx=3-mv; netF=[0,0];
      for i=1:length(par1) %total force for different parallel interactions
        vecTr=crd(mv,parX(i,mv)*2+(1:2))-crd(mv,parX(i,mv)*2+(-1:0)); vecTr=[-vecTr(2),vecTr(1)]; %take unit vector perp to first parallel
        pIx=sub2ind([3,3],par1(i),par2(i)); %linear index
        coOrient=-inters.parAdjacencyMatrix(pIx); %+/-
        if(mv==1); sgn=1;
        else; sgn=coOrient;
        end
        if(prevOrd(pIx))
            sgnPrev=sign(prevOrd(pIx)); fDir=sgn*sgnPrev; 
            currOrd(pIx)=sgnPrev;
        else 
            vec2m=(crd(mv,parX(i,mv)*2+(1:2))+crd(mv,parX(i,mv)*2+(-1:0)))-...
                (crd(fx,parX(i,fx)*2+(1:2))+crd(fx,parX(i,fx)*2+(-1:0))); %vector fixed -> moving c.o.m.
            fDir=sign(vecTr*vec2m'); 
            currOrd(pIx)=sgn*fDir;
        end
        flipPar(pIx)=coOrient; %tells what to do under smarticle swap
        netF=netF+fDir*vecTr;
      end
      xSm(mv,1:2)=xSm(mv,1:2)+netF/(norm(netF)+1E-6)*parShift;
      xSm(mv,3)=xSm(mv,3)+(rand-0.5)*tRes; %add angle fluctuation
      return; %handle any intersections next time around
    end
    
    % Handle intersections========================
%     scatter(inters.intMatrixX(:),inters.intMatrixY(:),1000,'r.'); %mark collision points
    % handle different possible intersection scenarios:-----------
    % group corner intersections:
    tmpInt=inters.intAdjacencyMatrix; ii=1;
    intList=zeros(3,6); %[src,trg,sLk,tLk,beg,intDistTrg] - distinct intersections
    crn1=find(sum(tmpInt)==2 & tmpInt(2,:)); %corners: trg=2
    crn2=find(sum(tmpInt,2)==2 & tmpInt(:,2)); %corners: trg=1
    if(any(crn1) && any(crn2)) %take the smaller corner
        dist1=inters.intNormalizedDistance1To2(2,crn1(1)); dist1=min(dist1,1-dist1);
        dist2=inters.intNormalizedDistance2To1(crn2(1),2); dist2=min(dist2,1-dist2);
        if(dist1>dist2); crn1=[];
        else; crn2=[];
        end
    end
    for i=1:length(crn1)
        intDistTrg=sum(inters.intNormalizedDistance2To1(tmpInt(:,crn1(i)),crn1(i)))/2;
        intList(ii,:)=[1,2,2,crn1(i),tmpInt(1,crn1(i)),intDistTrg];
        ii=ii+1; tmpInt(:,crn1(i))=0; %remove intersection from mx
    end
    for i=1:length(crn2) 
        intDistTrg=sum(inters.intNormalizedDistance1To2(crn2(i),tmpInt(crn2(i),:)))/2;
%         ixRep=find(intList(:,6)>0 & (intDistTrg>intList(:,6) | intDistTrg>1-intList(:,6)));
        intList(ii,:)=[2,1,2,crn2(i),tmpInt(crn2(i),1),intDistTrg];
        ii=ii+1; tmpInt(crn2(i),:)=0; %remove intersection from mx
    end
    if(tmpInt(2,2) && sum(sum(tmpInt))>1) %two corners intersecting
%     if(sum(tmpInt(2,:))==1 && sum(tmpInt(:,2))==1 && sum(sum(tmpInt))>1) 
        tmpInt(2,2)=0; [ins1,ins2]=find(tmpInt);
        ci=xor(inters.intNormalizedDistance1To2(ins1,ins2)>1-inters.intNormalizedDistance1To2(ins1,ins2),ins1==3); %end xor 3
        if(sum(ci)~=1); error('corners intersection problem'); end
        intList(ii,:)=[1,2,2,2,ins1(ci)==1,ins2(ci)==3];
        ii=ii+1; tmpInt(ins1(ci),ins2(ci))=0;
    end
    if(sum(tmpInt(2,:))==1 && sum(tmpInt(:,2))==1) %two corners intersecting
        ins1=find(tmpInt(:,2)); ins2=2;
        ci=xor(inters.intNormalizedDistance1To2(ins1,ins2)>1-inters.intNormalizedDistance1To2(ins1,ins2),ins1==3);
        if(ci)
            intList(ii,:)=[1,2,ins1,2,ins1==3,find(tmpInt(2,:))==3];
            ii=ii+1; tmpInt(2,:)=0; tmpInt(:,2)=0;
        end
    end
    [ins1,ins2]=find(tmpInt); inX=[ins1, ins2]; %get intersection index
    for i=1:length(ins1) %single intersections
%         if(ins1(i)==2 && ins2(i)==2); continue; end %just ignore it - probably a corner
        [src,trg,beg,intDistTrg]=findSrc(inters,ins1(i),ins2(i),lenVc); 
        intList(ii,:)=[src,trg,inX(i,src),inX(i,trg),beg,intDistTrg];
        ii=ii+1;
    end
    
    % move according to type of interaction-------------------
    switch ii %switch on number of distinct contacts
        case 1 %no intersections 
        case 2 %if only one intersection: rotate------------------ 
    src=intList(1,1); trg=intList(1,2); sLk=intList(1,3); tLk=intList(1,4);
    beg=intList(1,5); intDistTrg=intList(1,6);
    %find force:
    [fAng,fDir,vStickOut]=intForce(sm,crd,src,sLk,beg,trg,tLk,intDistTrg);
    %get force angle from what we are pushing on (normal to the surface):
    %and calculate the response on the pushed smarticle:
    piv=zeros(2,3);
    switch tLk %pivot target
        case 1 %left arm pushed
          piv(trg,:)=pivotArm(sm(trg,4), sm(trg,4)+pi/2, (1-intDistTrg)*A/B); 
          piv(trg,[1,3])=-piv(trg,[1,3]); %flip x-axis
        case 2 %body pushed
          piv(trg,:)=pivotBody(intDistTrg - 0.5);
        case 3 %right arm pushed
          piv(trg,:)=pivotArm(sm(trg,5), sm(trg,5)+pi/2, intDistTrg*A/B);
    end
    
    %calculate the response on the pushing smarticle:
    switch sLk
        case 1  %pushing with left arm tip
          piv(src,:)=pivotArm(sm(src,4), -fAng+sm(src,3)+pi/2, A/B); piv(src,[1,3])=-piv(src,[1,3]);
        case 2
          if(beg) %pusing with left corner
            piv(src,:)=pivotArm(0, -fAng+sm(src,3)+pi/2, 0); piv(src,[1,3])=-piv(src,[1,3]);
          else %if pushing with right corner
            piv(src,:)=pivotArm(0, fAng-sm(src,3)+pi/2, 0);
          end
        case 3  %if pushing with the right arm tip
          piv(src,:)=pivotArm(sm(src,5), fAng-sm(src,3)+pi/2, A/B);
    end
    piv(:,3)=piv(:,3).*fricCoeff; %scale force by friction coefficients
    %chose which of the two moves - random, but weighted by the required force:
    srcF=abs(piv(src,3)); trgF=abs(piv(trg,3));
    if(((srcF-trgF)/(srcF+trgF))<0.5*(rand-0.5)); mv=src; %move source smarticle
    else; mv=trg; %else move target smarticle
    end
    cth=cos(sm(mv,3)-pi/2); sth=sin(sm(mv,3)-pi/2); rotMx=[[cth,-sth];[sth,cth]]; %rotation matrix
    pivCOM=(rotMx*piv(mv,1:2)'*B)'; %pivot to smarticle COM in lab frame
    pivot=sm(mv,1:2)+pivCOM; %pivot point in absolute coord
    pivRad=crd(src,(sLk-beg)*2+(1:2))-pivot; %pivot to collision point
    [pivRad(1),pivRad(2)]=cart2pol(pivRad(1),pivRad(2));
    pivAngle=abs(vStickOut(2)/pivRad(2).*cos(fAng-vStickOut(1))./sin(fAng-pivRad(1))); %angle to pivot in order to resolve collision
    pivAngle=min(pivAngle, maxAngle); %cap pivot angle
%     pivAngle=max(pivAngle,tRes*3/pivRad(2)); %bound pivot angle from below
    pivAngle=(1-2*(mv==src))*fDir*sign(piv(mv,3))*(pivAngle+trEps*(1+rand)/max(pivRad(2),0.5*B)); %rotate a little further to make sure, and orient
    sm12v=sm(mv,1:2)-sm(3-mv,1:2); %vector between smarticles
    %rotate COM; add repulsive noise to prevent sticking together:
    xSm(mv,1:2)=xSm(mv,1:2)+pivAngle*[1,-1].*flip(pivCOM)+trEps*abs(pivAngle)*sm12v/norm(sm12v)*rand; 
    xSm(mv,3)=xSm(mv,3)+pivAngle; %rotate angle
    
    
        otherwise %if >=2 intersections: pushing off - parallel transport
          mv=1+((fricCoeff(2)-fricCoeff(1))/(fricCoeff(2)+fricCoeff(1))<0.5*(rand-0.5)); %move the one with smaller fricCoeff
          fNet=[0,0];
          for i=1:ii-1 %intList=[src,trg,sLk,tLk,beg,intDistTrg]
            [fAng,fDir,~]=intForce(sm,crd,intList(i,1),intList(i,3),intList(i,5),...
                intList(i,2),intList(i,4),intList(i,6));
            fNet=fNet + [cos(fAng),sin(fAng)]*(1-2*(mv==intList(i,1)))*fDir;
          end
          xSm(mv,1:2)=xSm(mv,1:2)+fNet/(ii-1)*parShift;
          xSm(mv,3)=xSm(mv,3)+(rand-0.5)*tRes; %add angle fluctuation
    end
%     if(any(any(isnan(xSm))))
end

%characterize single intersection: who is pushing who
%in: intersection structure, intersecting links
%out: source and target smls, intersection in beginning of source?,
%distances on target link
function [src,trg,beg,intDistTrg]=findSrc(inters,ins1,ins2,lenVc)
    if(ins1==2) %middle link is always target
        if(ins2==2)%; cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); %axis([-0.5,0.5,-0.5,0.5]*12);
            'Warning: intersection in the middle of smarticles!'
        end
        src=2; trg=1; beg=ins2==1; intDistTrg=inters.intNormalizedDistance1To2(ins1,ins2);
%         end
    else
        if(ins2==2); src=1; trg=2; beg=ins1==1; intDistTrg=inters.intNormalizedDistance2To1(ins1,ins2);
        else %if neither link ==2, then pick shorter end
      if(ins1==1); dst1=inters.intNormalizedDistance1To2(ins1,ins2)*lenVc(1);
      else; dst1=(1-inters.intNormalizedDistance1To2(ins1,ins2))*lenVc(3);
      end %always take length from beg of 1 or end of 3
      if(ins2==1); dst2=inters.intNormalizedDistance2To1(ins1,ins2)*lenVc(1);
      else; dst2=(1-inters.intNormalizedDistance2To1(ins1,ins2))*lenVc(3);
      end
      src=1+(dst1>dst2); trg=3-src; 
      if(src==1); beg=ins1==1; intDistTrg=inters.intNormalizedDistance2To1(ins1,ins2);
      else; beg=ins2==1; intDistTrg=inters.intNormalizedDistance1To2(ins1,ins2);
      end
        end
    end
end

%get the interaction force
%in: 4 vertex coordinates, ... , relative distance to X on tLk
%out: force angle and direction (+/-)
function [fAng,fDir,vStickOut]=intForce(sm,crd,src,sLk,beg,trg,tLk,tXLen)
    fAng=0;    
    switch tLk %find force angle
        case 1; fAng=sm(trg,3)-sm(trg,4); %left arm pushed
        case 2; fAng=sm(trg,3); %center pushed
        case 3; fAng=sm(trg,3)+sm(trg,5); %right arm pushed
    end
    %get force orientation (+/-):
    intCrd=crd(trg,2*tLk+(-1:0)) + tXLen*(crd(trg,2*tLk+(1:2))-crd(trg,2*tLk+(-1:0))); %coordinate of the intersection
    vStickOut=crd(src,(sLk-beg)*2+(1:2))-intCrd; %sLk-beg=[0,4] vertex index - gives the piece sticking through inters
    [vStickOut(1),vStickOut(2)]=cart2pol(vStickOut(1),vStickOut(2)); %polar coordinates
    so2fAng=abs(mod(vStickOut(1)-fAng+pi,2*pi)-pi);
    fDir=sign(pi/2-so2fAng); %get the direction of the force on trg
end

%response when force applied to the right arm or corner
%in: arm angle, force angle, arm length (in units of B)
%out: [px,py,f] = pivot coordinates (in units of B) and critical force
%required to move (in units of friction force; f>0 => CCW rotation)
function [out]=pivotArm(al,th,A)
    secth=sec(th); tanth=tan(th);
    %the constant out front quantifies how far off the pivot can be (larger=>further away). "right" value: 0.081
    py=0.081./(-2*A*secth.*sin(al-th)+tanth); %approximation for py
    pylnpy2=-0.6*atan(10*py); %differentiable approximation for py*log(py^2) for py in (-0.5,0.5)
    px=tanth/2.*pylnpy2;
    f=-secth.*pylnpy2;
    out=[px,py,f];
end

%response when orthogonal force applied to the body
%in: distance from center to push point (in units of B)
%out: [px,py,f] = pivot coordinates (in units of B) and critical force required to move
function [out]=pivotBody(x)
    sq=sqrt(1+4*x.^2);
    out=[(x-sign(x).*sq/2), 0, -2*x+sign(x).*sq];
end