function [crdDat]=runSmarticles(tMax, windSize, Upow, freqList, phaseList, fricCoeff) %#codegen
global B tRes;
livePlot=0;
Nsm=length(freqList);
t=0:tRes:tMax;
%====Define motion gate===============
gates = @(t) [cos(freqList*t+phaseList),sin(freqList*t+phaseList)]*pi/2; %variable frequency circle gate
% gates = @(t) [cos(t),sin(t);cos(t),sin(t)]*pi/2; %circle gate
% chopTri = @(t) max(min(2*sawtooth(t,0.5),1),-1); %for sq wave
% gates = @(t) [chopTri(freqList*t+phaseList),chopTri(freqList*t+pi/2+phaseList)]*pi/2; %var freq square gate

xSm=zeros(Nsm,5);
xSm(:,4:5)=gates(0);

%======Set smarticle initial positions: [cx,cy, theta, al1, al2] - c.o.m coord, body orientation, arm angles
% xSm=[2,1,pi/4,pi/8,pi/8];
% xSm(:,1:3)=(rand(Nsm,3)-0.5).*repmat([10,10, 2*pi],Nsm,1);
for smi=1:Nsm 
    collFl=true;
    ii=1;
    while(collFl)
        ii=ii+1;
        collFl=false;
        xSm(smi,1:3)=(rand(1,3)-0.5).*[windSize,windSize, 2*pi]; %add new smcle
        for smic=1:smi-1 %check that it doesn't collide with previous ones
            res=pairCollision(xSm([smi,smic],:), false, [1,1], zeros(2));
            collFl=collFl || res(1); %only check for collisions
        end
        if(ii>1000); error('cannot build IC'); end
    end
end
% xSm(:,1:3)=[-3,0,pi/2; -1.1,0.1,pi/2-0.1];

%====Define Central attractive force=======
Fcent = @(vec) -vec.* repmat(min((vec(:,1).^2+vec(:,2).^2).^(Upow/2-1)...
    .*Upow/(windSize*0.8)^(Upow-2),10)/(windSize*0.8)^2,1,2);
%Circular "plate" potential 
%     Fcent = @(vec) -vec.*repmat(max(0,1-windSize*0.6./sqrt(vec(:,1).^2+vec(:,2).^2)),1,2);

%====Run simulation==============
nextAl=gates(t(1));
crdDat=zeros(Nsm,5,length(t)-1);
coder.extrinsic('waitbar');
w=waitbar(0);
for ti=1:length(t)-1
    xSm(:,4:5)=nextAl; %move the arms
    nextAl=gates(t(ti+1));
    xSm(:,1:3)=resolveCollisions(xSm,true, fricCoeff, nextAl); %resolve all collisions sequentially
    xSm(:,1:2)=xSm(:,1:2)+tRes*Fcent(xSm(:,1:2));
    
%     if(livePlot && mod(ti,0.05*2*pi/tRes)<1 && t(ti)>000) %show smarticles motion live
%         crd=smcle2coord(xSm);
%         cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*(windSize+B)*1.1);
%         pause(0.01); 
%     end
    if(mod(ti,length(t)/30)<=1); waitbar(ti/length(t),w); end
    crdDat(:,:,ti)=xSm;
end
close(w);
return