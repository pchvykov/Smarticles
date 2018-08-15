%Analyzing data for Smarticles runs

% crdDat=saveDat;
% n2=25; windSize=12; A=1.1; B=1;
%% Show final state for phase sep-------------
hold on;
for i=14%1:72%length(saveDat)
    dat=saveDat(i); ti=length(dat.crd(1,1,:));
    for ti=ti-500:ti
        cla;
        crd=smcle2coord(dat.crd(:,:,ti));
        plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',1); 
    plot(dat.crd(:,1,ti),dat.crd(:,2,ti),'k.','MarkerSize',15);
    plot(dat.crd(dat.n2:end,1,ti),dat.crd(dat.n2:end,2,ti),'r.','MarkerSize',15);
    axis([-0.5,0.5,-0.5,0.5]*(dat.wind+dat.B)*1.5);
    title(i);
    pause(0.01);
    end
end

%% Test number of neighbors for phase sep-------
ti=length(saveDat(1).crd(1,1,:));
hold off;
Nruns=0;
for i=1:length(saveDat) %number of non-empty runs
    Nruns=Nruns+length(saveDat(i).A);
end
% Nruns=73;%length(saveDat);

% fracNbs=zeros(Nruns,length(saveDat(1).crd(1,1,:)));
mnFracNbs=0;
for i=1:Nruns
    dat=saveDat(i);  Nsm=length(dat.freq);
    n2=dat.n2-1;
perm=1:Nsm;
fracNbs=0;
for ic=1:3 %loop to run some controls (all after i=1)
for ti=1:ti%ti-100:ti
    xCrd=repmat(dat.crd(perm,1,ti),1,Nsm); yCrd=repmat(dat.crd(perm,2,ti),1,Nsm);
    thCrd=repmat(dat.crd(perm,3,ti),1,Nsm);
    ngbd=(xCrd-xCrd').^2+(yCrd-yCrd').^2<0.5*(dat.B+2*dat.A).^2;% & mod(abs(thCrd-thCrd'),2*pi)<pi/4; %adjacency matrix
    sameNb=mean([(sum(ngbd(1:n2,1:n2))-1)/(n2-1),(sum(ngbd(n2+1:end,n2+1:end))-1)/(Nsm-n2-1)]);
    diffNb=mean([sum(ngbd(1:n2,n2+1:end))/n2,sum(ngbd(n2+1:end,1:n2))/(Nsm-n2)]);
    fracNbs(ic,ti)=(sameNb-diffNb)/(sameNb+diffNb+1E-5);
end
mnFracNbs(ic,i)=sum(fracNbs(ic,:)')./sum(fracNbs(ic,:)'~=0);
perm=randperm(Nsm); %control - scramble labels
end
end
%
clf; plot(mnFracNbs'); hold on;
clf; plot(movmean(fracNbs',50))
% pause(0.01);
return
%% Scatter plot
% if(~exist('freqList','var') || ~exist('fricCoeff','var') || ~exist('fracNbsM','var'))
  freqList=[]; fricCoeff=[]; windSize=[]; fracNbsM=[]; phaseList=[];

for i=1:Nruns
    freqList=[freqList,saveDat(i).freq(end)]; fricCoeff=[fricCoeff,saveDat(i).fric(end)];
    windSize=[windSize,saveDat(i).wind]; phaseList=[phaseList, (saveDat(i).phase(end))]; 
%     n2(i)=saveDat(i).n2;
end
fracNbsM=[fracNbsM,mnFracNbs(1,:)]; %tmp=fracNbsM-min(fracNbsM);
clf; scatter(phaseList,windSize,[], fracNbsM);%tmp/max(tmp));
% colormap hot;

%% Show c.o.m. motion---------
hold on; 
ip=1; dat=saveDat(ip);
for ti=1:length(dat.t)-1
    cla; plot(dat.crd(:,1,ti),dat.crd(:,2,ti),'.','MarkerSize',15);
    plot(dat.crd(dat.n2+1:end,1,ti),dat.crd(dat.n2+1:end,2,ti),'r.','MarkerSize',15);
%     crd=smcle2coord(crdDat(:,:,ti));
%     cla; plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2); 
%     cla; plot(crd(:,3:2:5)',crd(:,4:2:6)','-','LineWidth',2);
    axis([-0.5,0.5,-0.5,0.5]*(dat.wind+dat.B)*1.5);
    pause(0.01)
end
return
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
dat=squeeze(dat.crd(1,2,:))';
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

