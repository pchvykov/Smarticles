%Running basic smarticles ensemble
%Pavel Chvykov
clear all
%---------------------

rng(4);
global A B tRes; B=1; A=1.1; %smarticle size
Nsm=15; tRes=0.03; tMax=2000; %number of smarticles
t=0:tRes:tMax; %time domain
windSize=7.; Upow=20; %size and power of central potential
freqList=1+0.*rand(Nsm,1); phaseList=0.*rand(Nsm,1);
% freqList(11:end)=1;
% freqList=[1;1]; phaseList=[-pi/4; pi/2];
fricCoeff=1+(rand(Nsm,1)-0.5); %friction coefficients for different smcles
% fricCoeff=[1.5,0.4];

crdDat=runSmarticles_mex(tMax, windSize, Upow, freqList, phaseList, fricCoeff);
return;
%% Show c.o.m. motion---------
hold on;
for ti=1:50:length(t)-1
    cla; plot(crdDat(:,1,ti),crdDat(:,2,ti),'.','MarkerSize',15);
%     plot(crdDat(11:end,1,ti),crdDat(11:end,2,ti),'r.','MarkerSize',15);
%     crd=smcle2coord(crdDat(:,:,ti));
%     cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); 
%     cla; plot(crd(:,3:2:5)',crd(:,4:2:6)','-','LineWidth',2);
    axis([-0.5,0.5,-0.5,0.5]*(windSize+B)*1.5);
    pause(0.01)
end
%% Correlation matrix----------
figure; plot(squeeze(crdDat(:,1,:))')
% plot(mod(squeeze(crdDat(:,3,:))',2*pi),'.','MarkerSize',0.2)
% hold on; plot(squeeze(crdDat(11:end,1,:))','r')
return
crdDatFl=reshape(crdDat(:,1:3,:),Nsm*3,[]);
slT=1000; %slow time-scale
slTi=round(slT/tRes); sMx=5001; corr=zeros(Nsm*3,Nsm*3,sMx);
for ti=1:slTi:length(t)-slTi-sMx
for si=0:10:sMx-1
corr(:,:,si+1)=crdDatFl(:,ti:ti+slTi-1)*crdDatFl(:,ti+si:ti+si+slTi-1)'/slTi-...
    mean(crdDatFl(:,ti:ti+slTi-1),2)*mean(crdDatFl(:,ti+si:ti+si+slTi-1),2)';
% eigC(:,si+1)=eigs(corr(:,:,si+1),10);
end
plot(squeeze(corr(1,1,:)))
% plot(eigC')
pause(0.05);
end
%% Correlation for one d.o.f.
dat=squeeze(crdDat(1,2,:))';
% dat=squeeze(max(crdDat(:,1,:)))'/10;
figure; plot(dat);
return
sMx=10000; corr=zeros(1,sMx);
for si=0:10:sMx
%     corr(si+1)=(dat(1:end-sMx)-mean(dat(1:end-sMx)))*...
%         (dat(1+si:end-sMx+si)-mean(dat(1+si:end-sMx+si)))'/(length(dat)-sMx);
    corr(si+1)=(mod(dat(1:end-sMx)-mean(dat(1:end-sMx))+pi,2*pi)-pi)*...
        (mod(dat(1+si:end-sMx+si)-mean(dat(1+si:end-sMx+si))+pi,2*pi)-pi)'/(length(dat)-sMx);
end
plot(corr)

