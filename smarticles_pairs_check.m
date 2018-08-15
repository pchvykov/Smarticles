% Smarticles simulation
% Pavel Chvykov
clear all;
%-------------------------

rng(2);
global A B tRes; B=1; A=1.1; %smarticle size
Nsm=2; tRes=0.03; %number of smarticles
t=0:tRes:1000; %time domain

%======Set motion "gates"=================
freqList=1+0.*rand(Nsm,1); 
%------------------
%compare to "rotation" video
phaseList=[-pi/4; pi/2]; xSm(:,1:3)=[-3,0,-pi/2; -2.1,0.8,pi/2-0.6]; fricCoeff=[1.;0.6];
% xSm(:,1:3)=[-3.049379859523560,-0.101609052471967,-2.407731426543896;-2.040243004761562,0.896246585520126,0.863999774283452];
% phaseList=[2.5482;-1.3788]; fricCoeff=[1.;0.6];
%Take 2018-02-12 03.27.26 PM, top, start 0:05:
% phaseList=[pi+0.3; -pi/2+0.]; xSm(:,1:3)=[-3,0,-pi/2; -2.9,0.1,-pi/2]; fricCoeff=[0.9;1.]; %fails!
%Take 2018-02-12 03.27.26 PM, bottom-right, start 0:03:
% phaseList=[-3*pi/4+0.2; -3*pi/4-0.2]; xSm(:,1:3)=[-3,0,pi/2; -1.9,0.1,-pi/2]; fricCoeff=[1.;1.];
%Phase-magnetism stability:
phaseList=[1; 1]*pi/2; xSm(:,1:3)=[-2,0,-pi/2; -1.8,0.2,-pi/2-0.4]; fricCoeff=[1.;1];
%Parallel test:
phaseList=[1; 1]*pi /2.5; xSm(:,1:3)=[-2,0,pi/2; -4.3,0.3,-pi/2+0.1]; fricCoeff=[1.;1];
%------------------
% gates = @(t) [cos(freqList*t+phaseList),sin(freqList*t+phaseList)]*pi/2; %variable frequency circle gate
% gates = @(t) [cos(t),sin(t);cos(t),sin(t)]*pi/2; %circle gate
% chopTri = @(t) max(min(2*sawtooth(t,0.5),1),-1); %for sq wave
% gates = @(t) [chopTri(freqList*t+phaseList),chopTri(freqList*t+pi/2+phaseList)]*pi/2;
gates = @(t) [smoothSq(freqList*t+phaseList),smoothSq(freqList*t+pi/2+phaseList)]*(pi/2-0.15); %var freq square gate
% xSm=zeros(Nsm,5);
xSm(:,4:5)=gates(0);
% fricCoeff=1+0.*(rand(1,Nsm)-0.5); %friction coefficients for different smcles
% fricCoeff=[1.5,0.4];
%======Set smarticle initial positions: [cx,cy, theta, al1, al2] - c.o.m coord, body orientation, arm angles
% xSm=[2,1,pi/4,pi/8,pi/8];
% xSm(:,1:3)=(rand(Nsm,3)-0.5).*repmat([10,10, 2*pi],Nsm,1);
windSize=5;
% for smi=1:Nsm 
%     collFl=true;
%     while(collFl)
%         collFl=false;
%         xSm(smi,1:3)=(rand(1,3)-0.5).*[windSize,windSize, 2*pi]; %add new smcle
%         for smic=1:smi-1 %check that it doesn't collide with previous ones
%             res=pairCollision(xSm([smi,smic],:), false, [1,1], zeros(2));
%             collFl=collFl || res(1); %only check for collisions
%         end
%     end
% end
% xSm(:,1:3)=[-3,0,pi/2; -1.1,0.1,pi/2-0.1];
% xSm(:,1:3)=[-3,0,pi/2; -3,-0.2,-pi/2+0.1];
% xSm(:,1:3)=[-3,0,pi/2; -2.3,-1.1,pi/6+0.1];
% xSm(:,1:3)=[-2,0,pi/2; -3.7,0.3,-pi/2+0.1]; %unsolved bug (dt=0.03)!
% xSm(:,1:3)=[-2,0,pi/2; -4.3,0.3,-pi/2+0.1]; %parallel

parOrd=zeros(9,Nsm,Nsm); %store ordering of parallel links (to avoid passing through)
hold on;
for ti=1:length(t)-1
    xSm(:,4:5)=gates(t(ti)); %move the arms
    [xSm(:,1:3),parOrd]=resolveCollisions(xSm,true, fricCoeff, parOrd); %resolve all collisions sequentially
    parOrd=parOrd/2; parOrd(abs(parOrd)<0.1)=0; %decay memory of parallel over time
    if(1)%(mod(ti,0.015*2*pi/tRes)<1 && ti*tRes<25) || mod(ti,0.3*2*pi/tRes)<1) %display graph
        crd=smcle2coord(xSm);
        cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*(windSize+B)*1.5);
        title(floor(ti*tRes));
%         return;
        pause(0.01); 
    end
end
return
  