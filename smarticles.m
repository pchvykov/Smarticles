% Smarticles simulation
% Pavel Chvykov
clear all;
%-------------------------
% reproduces a bug!
rng(7);
global A B tRes; B=1; A=1; %smarticle size
Nsm=7; tRes=0.03; %number of smarticles
t=0:tRes:1000; %time domain
windSize=B*0.5*sqrt(Nsm); scRat=[20,1];
livePlot=1; plFrom=00; fpp=15; %frames per period

%======Set motion "gates"=================
freqList=1+0*rand(Nsm,1); phaseList=0.2*rand(Nsm,1);
% phaseList(1:25)=0;
% freqList(11:end)=0;
% freqList=[1;1]; phaseList=[-pi/4; pi/2]
Nwall=4;
%--variable frequency circle gate with walls:
% gates = @(t) [zeros(Nwall,2); ...
%     cos(freqList(Nwall+1:end)*t+phaseList(Nwall+1:end)),sin(freqList(Nwall+1:end)*t+phaseList(Nwall+1:end))]*pi/2;
% gates = @(t) [cos(freqList*t+phaseList),sin(freqList*t+phaseList)]*pi/2; %variable frequency circle gate
% chopTri = @(t) max(min(2*sawtooth(t,0.5),1),-1); %for sq gate
% gates = @(t) [chopTri(freqList*t+phaseList),chopTri(freqList*t+pi/2+phaseList)]*pi/2; %var freq square gate
gates = @(t) [smoothSq(freqList*t+phaseList),smoothSq(freqList*t+pi/2+phaseList)]*(pi/2-0.2); %var freq smooth square gate
xSm=zeros(Nsm,5);
xSm(:,4:5)=gates(0);
fricCoeff=1+(rand(Nsm,1)-0.5); %friction coefficients for different smcles
% fricCoeff=[1.5,0.4];
%--------Set wall--------------
% xSm(1:Nwall,1:3)=zeros(Nwall,3);
% xSm(1:Nwall,2)=((1:Nwall)-3)*(B+2*A)*0.6;
% xSm(1:Nwall,3)=pi/2;
out=1.5;shft=0.05; xSm(1:Nwall,1:3)=[shft,out,pi/2; out,-shft,0; -shft,-out,-pi/2; -out,shft,pi];
xSm(1:Nwall,4:5)=-ones(Nwall,2)*pi/6;
fricCoeff(1:Nwall)=10000;
%======Set smarticle initial positions: [cx,cy, theta, al1, al2] - c.o.m coord, body orientation, arm angles
% xSm=[2,1,pi/4,pi/8,pi/8];
% xSm(:,1:3)=(rand(Nsm,3)-0.5).*repmat([10,10, 2*pi],Nsm,1);
for smi=Nwall+1:Nsm 
    collFl=true;
    ii=1;
    while(collFl)
        ii=ii+1;
        collFl=false;
        xSm(smi,1:3)=(rand(1,3)-0.5).*[windSize,windSize, 2*pi]; %add new smcle
        for smic=1:smi-1 %check that it doesn't collide with previous ones
            [res,~,~]=pairCollision(xSm([smi,smic],:), false, [1,1], zeros(9,1));
            collFl=collFl || res(1); %only check for collisions
        end
        if(ii>1000); error('cannot build IC'); end
    end
end
% xSm(:,1:3)=[-3,0,pi/2; -1.1,0.1,pi/2-0.1];

%====Define Central attractive force=======
%Bowl potential
% Upow=4;
% Fcent = @(vec) -vec.*min((vec(:,1).^2+vec(:,2).^2).^(Upow/2-1).*Upow/(windSize*0.8)^(Upow-2),...
%     2)/(windSize*0.8)^2;
%Circular "plate" potential 
Fcent = @(vec) 0;%-vec/B.*subplus(1-windSize*0.6./sqrt(vec(:,1).^2+vec(:,2).^2));
%Rectangular plate:
% Fcent = @(vec) -vec.*scRat/B.*subplus(1-windSize*0.6./max(abs(vec.*scRat),[],2));

% hold on;
nextAl=gates(t(1));
crdDat=zeros(Nsm,5,length(t)-1);
parOrd=zeros(9,Nsm,Nsm); %store ordering of parallel links (to avoid passing through)
 w=waitbar(0);
for ti=1:length(t)-1
    xSm(Nwall+1:end,4:5)=nextAl(Nwall+1:end,:); %move the arms
    nextAl=gates(t(ti+1));
    [xSm(:,1:3),parOrd]=resolveCollisions_mex(xSm,true, fricCoeff, parOrd); %resolve all collisions sequentially
    parOrd=parOrd/2; parOrd(abs(parOrd)<0.1)=0; %decay memory of parallel over time
    xSm(:,1:2)=xSm(:,1:2)+tRes*Fcent(xSm(:,1:2))./fricCoeff;
    
    if(livePlot && mod(ti,2*pi/tRes/fpp)<1 && t(ti)>plFrom) %show smarticles motion live
        crd=smcle2coord(xSm);
        clf; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); axis([-0.5,0.5,-0.5,0.5]*(windSize+2*B)*1.3); axis square;
        title(t(ti));
        pause(0.01);
%         return
    end
    crdDat(:,:,ti)=xSm;
    if(mod(ti,length(t)/30)<=1); waitbar(ti/length(t),w); end
end
close(w);
% return

%% Ave velocity vs density-----------

%% Correlation matrix----------
plot(squeeze(crdDat(1,1,:))')
% plot(mod(squeeze(crdDat(:,3,:))',2*pi),'.','MarkerSize',0.2)
% hold on; plot(squeeze(crdDat(11:end,1,:))','r')
% return
crdDatFl=reshape(crdDat(:,1:3,:),Nsm*3,[]);
slT=5*2*pi/freqList(1); %slow time-scale - a few oscillation periods
slTi=round(slT/tRes); sMx=round(slTi/2); corr1=[];
% w=waitbar(0); 
tii=0;
for ti=sMx+1:round(slTi/2):length(t)-slTi-sMx
    tii=tii+1;

  corr=zeros(Nsm*3,Nsm*3,sMx); 
  sii=0;
for si=-sMx:10:sMx-1
    sii=sii+1;
corr(:,:,sii)=crdDatFl(:,ti:ti+slTi-1)*crdDatFl(:,ti+si:ti+si+slTi-1)'/slTi-...
    mean(crdDatFl(:,ti:ti+slTi-1),2)*mean(crdDatFl(:,ti+si:ti+si+slTi-1),2)';
corr(:,:,sii)=(corr(:,:,sii)+corr(:,:,sii)');
% subplot(311), plot(crdDatFl(1,ti:ti+slTi-1)-mean(crdDatFl(1,ti:ti+slTi-1),2));
% subplot(312), plot(crdDatFl(1,ti+si:ti+si+slTi-1)-mean(crdDatFl(1,ti+si:ti+si+slTi-1),2));
% subplot(313), plot(squeeze(corr(1,1,1:sii))); axis([0,sMx-1,-Inf,Inf]);
% pause;
% eigC(:,si+1)=eigs(corr(:,:,si+1),10);
end
% plot(squeeze(corr(1,1,:)))
% pause;
% plot(eigC')

% [Bcorr,ecorr]=eig(sum(corr,3),'vector');
% [ecorr, srtIx]=sort(abs(ecorr),'ascend'); Bcorr=Bcorr(:,srtIx);
% corr1=[corr1, (ecorr)];
% % corrEV(:,:,tii)=Bcorr;
% subplot(121),semilogy(((corr1(1:end,:)')));
% subplot(122),plot(abs(Bcorr)+(1:length(Bcorr(1,:)))) %plot eigenvectors to try and find collective modes
% pause;

% waitbar(ti/(length(t)-slTi-sMx),w);
% corr1=[corr1, diag(corr(:,:,round(sii/2))./(sum(corr,3)))]; %a measure for how large the regular fluctuations are 
corr1=[corr1, diag(sum(corr,3))];
end
% close(w);
%%
clf; semilogy((abs(corr1(1:Nsm,:)')));
% subplot(122),plot
return;
%% Show c.o.m. motion---------
clf; hold on;
for ti=1:30:length(t)-1
    crd=smcle2coord(crdDat(:,:,ti));
    clf;
    plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',1,'Color',[1,1,1]*0.9); 
%     cla; plot(crd(:,3:2:5)',crd(:,4:2:6)','-','LineWidth',1);
    plot(crdDat(:,1,ti),crdDat(:,2,ti),'k.','MarkerSize',15);
%     plot(crdDat(11:end,1,ti),crdDat(11:end,2,ti),'r.','MarkerSize',15);
    axis([-0.5,0.5,-0.5,0.5]*(windSize+B)*1.5);
    pause(0.01)
end
%% Correlation for one d.o.f.
dat=squeeze(crdDat(1,2,:))';
% dat=squeeze(max(crdDat(:,1,:)))'/10;
figure; plot(dat);
% return
sMx=10000; corr=zeros(1,sMx);
for si=0:10:sMx
    corr(si+1)=(dat(1:end-sMx)-mean(dat(1:end-sMx)))*...
        (dat(1+si:end-sMx+si)-mean(dat(1+si:end-sMx+si)))'/(length(dat)-sMx);
%     corr(si+1)=(mod(dat(1:end-sMx)-mean(dat(1:end-sMx))+pi,2*pi)-pi)*...
%         (mod(dat(1+si:end-sMx+si)-mean(dat(1+si:end-sMx+si))+pi,2*pi)-pi)'/(length(dat)-sMx);
end
plot(corr)

