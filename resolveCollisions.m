%resolve all collisions sequentially and iteratively until clear, returning new sm position values
%in: list of smcle 5-tuples, flag whether to resolve or just check collisions
%out: T/F if just checking, list of new 3-tuples (cx,cy,theta) if resolving
function [xSm,parOrd]=resolveCollisions(sm, resolveFl, fricCoeff, parOrd) %#codegen
    global A B tRes; Nsm=length(sm(:,1));
    collFl=true; whCnt=1;
    while(collFl) %sequentially resolve all collisions until none left
        collFl=false;
      iterOrd=randperm(Nsm); %randomize each pass to enhance stability
      for smi=1:Nsm
        smi=iterOrd(smi);
        %check for potential collisions based on distance to other smarticles:
        smC = find(sum((repmat(sm(smi,1:2),Nsm,1)-sm(:,1:2)).^2,2) < (2*A+B).^2);
        for ci=1:length(smC)
            smci=smC(ci); %index of the colliding smcle
            if(smci==smi); continue; end %no collision with itself
%             if(resolveFl) %plot current pair being checked:
%                 crd=smcle2coord(sm([smi,smci],:));
%                 cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-o','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*12);
% %                 pause();
%             end

            [res,parOrd(:,smi,smci),flipPar]=pairCollision(sm([smi,smci],:),resolveFl,fricCoeff([smi,smci]),parOrd(:,smi,smci)); %resolve pair collision
            if(any(flipPar)); parOrd(:,smci,smi)=flipPar.*parOrd(:,smi,smci); end
            if all(~res); continue; end %if no collision, continue
            if whCnt>100*Nsm; continue; end %if can't resolve, just move on
            collFl=true; %else set collision flag
            sm([smi,smci],1:3)=res;
            sm12v=sm(smi,1:2)-sm(smci,1:2); n12v=norm(sm12v); %vector between smarticles
            if(n12v<0.2*B || (whCnt>10*Nsm && mod(whCnt,3)<1)) %can't resolve collisions
                sm([smi,smci],1:2)=sm([smi,smci],1:2)+...
                    [sm12v;-sm12v]/n12v*rand*0.03*B./[fricCoeff([smi,smci]),fricCoeff([smi,smci])]; %rotate COM; add repulsive noise to prevent sticking together
            end
        end
      end
      if(~resolveFl); xSm=collFl*ones(Nsm,3); return; end %if just checking collisions
%       collFl=false;
      whCnt=whCnt+1;
    end
%     whCnt
    xSm=sm(:,1:3);
end