%resolve a pair-collision, returning new sm position values
%in: the two smcle 5-tuples, flag whether to resolve or just check collisions
%out: T/F if just checking, list of new 3-tuples (cx,cy,theta) if resolving
function [xSm]=pairCollision(sm, resolveFl, fricCoeff, nextAl) %#codegen
    global A B tRes;
    % check for collisions:----------
    crd=smcle2coord(sm);
    inters = lineSegmentIntersect([crd(1,1:4); crd(1,3:6); crd(1,5:8)],[crd(2,1:4); crd(2,3:6); crd(2,5:8)]);
    if all(~inters.intAdjacencyMatrix); xSm=zeros(2,3); return; end %if no collision, return false
    if(~resolveFl); xSm=ones(2,3); return; end %if just checking for collisions
%     cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12);
%     scatter(inters.intMatrixX(:),inters.intMatrixY(:),1000,'r.'); %mark collision points
    % find out who is pushing who:-------
    lenMx=repmat([A;B;A],1,3); lenMx2=lenMx'; %scales to get real-space distances
    inX=find(inters.intAdjacencyMatrix); %get intersection index
    inX=inX(1);
    dBeg12=inters.intNormalizedDistance1To2(inX); dEnd12=(1-dBeg12).*lenMx(inX); dBeg12=dBeg12.*lenMx(inX);
    dBeg21=inters.intNormalizedDistance2To1(inX); dEnd21=(1-dBeg21).*lenMx2(inX); dBeg21=dBeg21.*lenMx2(inX);
    intDistVc=[dBeg12, dEnd12, dBeg21, dEnd21];
    %decide by min sticking-out length:
    [minDist,mIx]=min(intDistVc); %find shortest distance to intersec
%     if(minDist>B/3) %error - need higher resolution (ambiguous pusing/pushed)
%         "warning: collision orientation ambiguous"
%     end
    if(mIx<=2); src=1; trg=2; sLk=mod(inX-1,3)+1; tLk=ceil(inX/3); %src - pushing, trg - pushed
    else; src=2; trg=1; tLk=mod(inX-1,3)+1; sLk=ceil(inX/3);
    end
    beg=logical(mod(mIx,2)); %src is at beginning of the sLk link? 
    if(sLk==2 || (sLk==3 && beg) || (sLk==1 && ~beg)) %ensure that corner - check other intersection
        if(~(src==1 && sum(inters.intAdjacencyMatrix(:,tLk))==2) ...
                && ~(src==2 && sum(inters.intAdjacencyMatrix(tLk,:))==2))
            mIx=(mIx<=2)*2; [~,tmp]=min(intDistVc(mIx+(1:2)));
            mIx=mIx+tmp; beg=logical(mod(mIx,2));
            tmp=src; src=trg; trg=tmp;
            tmp=sLk; sLk=tLk; tLk=tmp;
        end %else make the other link source
    end
    % Do move calculation:----------
    trEps=0.1*tRes*B; maxAngle=tRes;
    %get force angle from what we are pushing on (normal to the surface):
    %and calculate the response on the pushed smarticle:
    piv=zeros(2,3); fAng=0;
    if(tLk==3); fAng=sm(trg,3)+sm(trg,5); %right arm pushed
        piv(trg,:)=pivotArm(sm(trg,5), sm(trg,5)+pi/2, intDistVc(2*trg-1)/B);
    elseif(tLk==2); fAng=sm(trg,3); %body pushed
        piv(trg,:)=pivotBody(intDistVc(2*trg-1)/B - 0.5);
    elseif(tLk==1); fAng=sm(trg,3)-sm(trg,4); %left arm pushed
        piv(trg,:)=pivotArm(sm(trg,4), sm(trg,4)+pi/2, intDistVc(2*trg)/B); piv(trg,[1,3])=-piv(trg,[1,3]); %flip x-axis
    end
    %get force orientation:
    vStickOut=crd(src,(sLk-beg)*2+(1:2))-[inters.intMatrixX(inX),inters.intMatrixY(inX)]; %sLk-beg=[0,4] vertex index - gives the piece sticking through inters
    [vStickOut(1),vStickOut(2)]=cart2pol(vStickOut(1),vStickOut(2)); %polar coordinates
    so2fAng=abs(mod(vStickOut(1)-fAng+pi,2*pi)-pi);
    fDir=sign(pi/2-so2fAng); %get the direction of the force on trg
    xSm=sm(:,1:3); %setup the identity map
    
    %calculate the response on the pushing smarticle:
    if(~beg && sLk==3) %if pushing with the right arm tip
        piv(src,:)=pivotArm(sm(src,5), fAng-sm(src,3)+pi/2, A/B);
    elseif((beg && sLk==3) || (~beg && sLk==2)) %if pushing with right corner
        piv(src,:)=pivotArm(0, fAng-sm(src,3)+pi/2, 0);
    elseif((beg && sLk==2) || (~beg && sLk==1)) %pusing with left corner
        piv(src,:)=pivotArm(0, -fAng+sm(src,3)+pi/2, 0); piv(src,[1,3])=-piv(src,[1,3]);
    elseif(beg && sLk==1) %pushing with left arm tip
        piv(src,:)=pivotArm(sm(src,4), -fAng+sm(src,3)+pi/2, A/B); piv(src,[1,3])=-piv(src,[1,3]);
    end
    piv(:,3)=piv(:,3).*fricCoeff; %scale force by friction coefficients
    %chose which of the two moves - random, but weighted by the required force:
    srcF=abs(piv(src,3)); trgF=abs(piv(trg,3));
    if(((srcF-trgF)/(srcF+trgF))<0.5*(rand-0.5)); mv=src; %move source smarticle
    else; mv=trg; %else move target smarticle
    end
%     pAold=0; pCOMold=[0,0];
%     for i=1:2 %if one is hard to rotate (too far), rotate the other
    cth=cos(sm(mv,3)-pi/2); sth=sin(sm(mv,3)-pi/2); rotMx=[[cth,-sth];[sth,cth]]; %rotation matrix
    pivCOM=(rotMx*piv(mv,1:2)'*B)'; %pivot to smarticle COM in lab frame
    pivot=sm(mv,1:2)+pivCOM; %pivot point in absolute coord
    pivRad=crd(src,(sLk-beg)*2+(1:2))-pivot; %pivot to collision point
    [pivRad(1),pivRad(2)]=cart2pol(pivRad(1),pivRad(2));
    pivAngle=abs(vStickOut(2)/pivRad(2).*cos(fAng-vStickOut(1))./sin(fAng-pivRad(1))); %angle to pivot in order to resolve collision
%     if(abs(pivAngle)<maxAngle || max(fricCoeff)>100); break; end
%     if(i==1); mv=3-mv; pAold=pivAngle; pCOMold=pivCOM; %if pivAngle is too large, try rotating the other one
%     elseif(abs(pAold)<abs(pivAngle)); pivAngle=pAold; mv=3-mv; pivCOM=pCOMold; end
%     end
    pivAngle=min(pivAngle, maxAngle); %cap pivot angle
%     if(abs(pivAngle)<maxAngle) %only pivot if small angle - else ... parallel?
         %xSm=NaN; return; %give error if rotating too far - need better resolution, or something is wrong
%     pivAngle=max(pivAngle,tRes*3/pivRad(2)); %bound pivot angle from below
    pivAngle=(1-2*(mv==src))*fDir*sign(piv(mv,3))*(pivAngle+trEps*(1+rand)/max(pivRad(2),0.5*B)); %rotate a little further to make sure, and orient
    sm12v=sm(mv,1:2)-sm(3-mv,1:2); %vector between smarticles
    %rotate COM; add repulsive noise to prevent sticking together:
    xSm(mv,1:2)=xSm(mv,1:2)+pivAngle*[1,-1].*flip(pivCOM)+trEps*abs(pivAngle)*sm12v/norm(sm12v)*rand; 
    xSm(mv,3)=xSm(mv,3)+pivAngle; %rotate angle
%     end
    %if links were near-parallel, ensure they don't pass through on nextstep: 
    %(instead make them cross at the same point they did this time)
    if(abs(so2fAng-pi/2)<tRes*20)
        nextCrd=smcle2coord([xSm,nextAl]); %coordinates for next arm angles
        nextInt=lineSegmentIntersect(nextCrd(src,(sLk-1)*2+(1:4)),nextCrd(trg,(tLk-1)*2+(1:4))); %intersection of these same links
        cla; plot(nextCrd(:,1:2:end)',nextCrd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12);
        scatter(nextInt.intMatrixX(:),nextInt.intMatrixY(:),1000,'r.'); %mark collision points
        %get new force orientation:
        begS=1-2*beg;
        nSV=begS *(nextCrd(src,(sLk)*2+(1:2))-nextCrd(src,(sLk-1)*2+(1:2))); %new source vector
        nTV=nextCrd(trg,(tLk)*2+(1:2))-nextCrd(trg,(tLk-1)*2+(1:2)); %new target vector
        sinTh=(nSV(1)*nTV(2)-nSV(2)*nTV(1))/norm(nSV)/norm(nTV);
        flipOrt=-fDir*sign(sinTh);%do the links flip relative orientation? use sin = cross prod
        if(flipOrt>0) %not flipping
            currInt=nextInt.intNormalizedDistance1To2(1)*lenMx(sLk,1);
        else; currInt=nextInt.intNormalizedDistance2To1(1)*lenMx(tLk,1);
            begS=1-2*(nSV*nTV'>0); nTV=-begS*nSV; sLk=tLk;
        end
        goalInt=lenMx(sLk,1)*(0.5+0.45*begS); %shift s.t. this is new intersection point
        smShift=begS*(goalInt-currInt)*abs(sinTh); %shift = intShift * sin(angle between new links)
        if(smShift>0)
%             if(smShift<trEps/5); smShift=trEps; end %bound shift from below
            xSm(mv,1:2)=xSm(mv,1:2)-(1-2*(mv==src))*fDir*smShift*flip(nTV).*[1,-1]/norm(nTV); %shift orthogonal to new target vector
        else
            xSm(mv,3)=xSm(mv,3)+(rand-0.5)*tRes;
        end
        nextCrd=smcle2coord([xSm,nextAl]); %coordinates for next arm angles
        nextInt=lineSegmentIntersect(nextCrd(src,(sLk-1)*2+(1:4)),nextCrd(trg,(tLk-1)*2+(1:4))); %intersection of these same links
        cla; plot(nextCrd(:,1:2:end)',nextCrd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12);
        scatter(nextInt.intMatrixX(:),nextInt.intMatrixY(:),1000,'r.'); %mark collision points

%     elseif(abs(pivAngle)>=maxAngle) %if still hasn't moved, wiggle apart
%         sm12v=sm(mv,1:2)-sm(3-mv,1:2); %vector between smarticles
%         xSm(mv,1:2)=xSm(mv,1:2)+sm12v/norm(sm12v)*rand*trEps; %add repulsive noise to prevent sticking together
%         xSm(mv,3)=xSm(mv,3)+(rand-0.5)*0.02;
    end
%     if(abs(so2fAng-pi/2)<tRes*10) %approx cos
%         xSm(:,1:2)=xSm(:,1:2)+4*trEps*fDir*[cos(fAng),sin(fAng)].*[1;-1];
%         xSm(:,3)=xSm(:,3)+(rand(2,1)-0.5)*tRes*40;
%     end
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