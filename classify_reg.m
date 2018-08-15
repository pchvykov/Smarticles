%Smarticles experimental data processing
%classifying regular states
% clear all;
%---------------------------------
%Choices:
%setup: nPrd, 
%sym: relative or absolute orientations? ref. r to ring instead of c.o.m.? deal with mod at this stage?
%split: measure the exact freq?
%FT: normalize phase or just leave as is? include IR & intermed freq?
%Perm-inv: many choices of functions. Normalize somehow?

%%
rng(1); iMov=1;
waveletsFl=true;
featVecAll=[];
nPrd=2; %number of periods in a snippet
global A B tRes; B=1; A=0.8; %smarticle size
windSize=19.2/5.2; %relative ring size
Nsm=numBods; tRes=1/movs(1).fps; %time resolution
for iMov=1%1:nMovs
crdDat=[];
crdDat(:,1,:)=permute(movs(iMov).x,[2,3,1])*100/5.2; %in units of smarticle size
crdDat(:,2,:)=permute(movs(iMov).y,[2,3,1])*100/5.2;
crdDat(:,1,:)=crdDat(:,1,:)-mean(mean(crdDat(:,1,:)));
crdDat(:,2,:)=crdDat(:,2,:)-mean(mean(crdDat(:,2,:)));
crdDat(:,3,:)=permute(movs(iMov).rot,[2,3,1])+pi/2;
t=movs(iMov).t(:,1); 
stIx=find(max(crdDat(:,1,2:end)-crdDat(:,1,1:end-1))/tRes > 0.4,1)-10; %a bit before bodies start moving
plot(squeeze(crdDat(:,3,:))')

%% arms are not tracked - estimate their locations
FTth=fft(squeeze(crdDat(:,3,:))')'; lenf=length(FTth(1,:));
FTthM=abs(FTth(:,1:lenf/2+1)/lenf); FTthPh=angle(FTth(:,1:lenf/2+1)/lenf);
wdat=2*pi/tRes*(0:lenf/2)/lenf; wi=find(wdat>10,1);
ftSt=20;
% plot(wdat(20:wi),FTthM(:,ftSt:wi))%,wdat(20:wi),FTthPh(:,20:wi)/50);
[~,freqIx]=max(FTthM(:,ftSt:wi),[],2); freqIx=freqIx+ftSt-1;
freqList=1.003*wdat(freqIx)'; phaseList=FTthPh(repmat(1:lenf/2+1,Nsm,1)==freqIx); 
if(std(phaseList)>1); phaseList=mod(phaseList,2*pi); end
phaseList=phaseList-mean(phaseList)-pi/4;
prd=2*pi/mean(freqList)/tRes;
% gates = @(t) [cos(freqList*t+phaseList),sin(freqList*t+phaseList)]*pi/2; %variable frequency circle gate
% gates = @(t) -[smoothSq(freqList*t+phaseList),smoothSq(freqList*t+pi/2+phaseList)]*pi/2; %var freq smooth square gate
% for ti=1:length(t)
%     if(ti>stIx)
%         crdDat(:,4:5,ti)=gates(t(ti-stIx)); 
%     else; crdDat(:,4:5,ti)=gates(0);
%     end
% end
%% Symmetrize data
%relative coordinates to account for rotation and translation invariance:
%------sm2 in ref.frame of sm1; sm3 in ref.frame of sm2; etc...-----
relDat=[crdDat(2:end,1:3,:);crdDat(1,1:3,:)]-crdDat(:,1:3,:);
% relDat(:,3,:)=mod(relDat(:,3,:),2*pi);
for si=1:Nsm %rotate crd into the reference frames of prev sm.
    cth=cos(crdDat(si,3,:)); sth=sin(crdDat(si,3,:));
    for ti=1:length(t)
        relDat(si,1:2,ti)=relDat(si,1:2,ti)*[[cth(:,:,ti), -sth(:,:,ti)]; [sth(:,:,ti),cth(:,:,ti)]];
    end
end %problem: translational d.o.f. are dominated by angular
%-----rotate crd into relative polar:--------
% relDat=crdDat(:,1:3,:);
% relDat(:,1:2,:)=relDat(:,1:2,:)-mean(relDat(:,1:2,:));
% [relDat(:,2,:),relDat(:,1,:)]=cart2pol(relDat(:,1,:),relDat(:,2,:)); %[theta,rho]
% relDat(:,2,:)=mod([relDat(2:end,2,:);relDat(1,2,:)]-relDat(:,2,:),2*pi); %make angles relative
% % mvMn=movmean(relDat(:,2:3,:),prd,3); relDat(:,2:3,:)=mod(relDat(:,2:3,:)+mvMn,2*pi)-mvMn;
subplot(311);plot(squeeze(relDat(:,1,:))')
subplot(312);plot(squeeze(relDat(:,2,:))')
subplot(313);plot(squeeze(relDat(:,3,:))')
% return
%% Permutation-invariant observables - central moments
clear piDat;
piDat(1,:,:)=mean(relDat)-mean(mean(relDat),3);
piDat(2,:,:)=(moment(relDat,2)); piDat(2,:,:)=sign(piDat(2,:,:)).*abs(piDat(2,:,:)).^(1/2);
piDat(3,:,:)=(moment(relDat,3)); piDat(3,:,:)=sign(piDat(3,:,:)).*abs(piDat(3,:,:)).^(1/3);
% subplot(311);plot(squeeze(piDat(:,1,:))')
% subplot(312);plot(squeeze(piDat(:,2,:))')
% subplot(313);plot(squeeze(piDat(:,3,:))')
% hold on; anPts=1:prd/4:length(t); scatter(anPts,zeros(1,length(anPts)),[],anPts);
return
if(waveletsFl) %use wavelet transform
%% Wavelet transform
wavDat=zeros(Nsm,2,110,length(t));
for mi=1:Nsm %over moments
    wavDat(mi,1,:,:)=cwt(squeeze(piDat(mi,1,:)));
    wavDat(mi,2,:,:)=cwt(squeeze(piDat(mi,2,:)));
end
%%
% cwtFB=cwtfilterbank('FrequencyLimits',[0,1]);
% wavDat(1,1,:,:)=cwt(squeeze(piDat(1,1,:)),'FilterBank',cwtFB);%'morse',10,'FrequencyLimits',[0,1]);
% surf(squeeze(abs(wavDat(1,1,:,:))),'EdgeColor','none'); view([0,0,1]);
%% Dimensional reduction
% can also try UMAP
% rng(1);
featVec=reshape(abs(wavDat(:,:,20:80,:)),[],length(t));
featVec=featVec./sum(featVec); %normalize
featVecAll=[featVecAll; featVec(:,1:prd/5:end)'];

else %Cut up into snippets and FT
    for iiiTmp=1
%% Split up the series into periods:
plSm=3; %prd=1.01*2*pi/mean(freqList)/tRes;
plot(squeeze(crdDat(plSm,3,:))'); hold on %check periodicity
plot(1:prd:length(t), squeeze(crdDat(plSm,3,1:prd:end))','.')
%
snips=zeros(Nsm,2,floor(nPrd*prd),floor(length(t)/prd-nPrd+1));
for si=0:length(t)/prd-nPrd
    snips(:,:,:,si+1)=piDat(:,1:2,1+si*prd:(si+nPrd)*prd);
end

%% Fourier Transform the snippets
snipsFT=fft(snips,[],3); lenf=floor(nPrd*prd);
snipsM=abs(snipsFT(:,:,2:lenf/2+1,:)/lenf); snipsPh=angle(snipsFT(:,:,2:lenf/2+1,:)/lenf);
wdat=2*pi/tRes*(1:lenf/2)/lenf; wi=find(wdat>50,1);
snipsPh=mod(snipsPh-(snipsPh(1,1,nPrd,:)).*permute(1:lenf/2,[1,3,2])/nPrd+pi,2*pi)-pi; %reference phases to main freq of r
sTst=15; plSm=3; plCrd=2;%reconstruction test for phase-normalization
snipsRec=squeeze(snipsM(plSm,plCrd,:,sTst).*exp(1i*snipsPh(plSm,plCrd,:,sTst))); snipsRec=ifft([0;snipsRec;conj(flip(snipsRec))]); 
clf; subplot(211),plot(squeeze(snips(:,plCrd,:,sTst))'); subplot(212),plot((snipsRec));
cla; plot(wdat(nPrd:wi),(squeeze(snipsM(:,plCrd,nPrd:wi,sTst))));
snipsCmx=snipsM(:,:,nPrd:nPrd:wi,:).*exp(1i*snipsPh(:,:,nPrd:nPrd:wi,:));%...
%     ./mean(mean(snipsM(:,:,nPrd,:))); %output a complex feature vector
cla; plot(squeeze(real(snipsCmx(:,plCrd,:,sTst)))');
% return
%% Embedding feature-vectors
rng(1)
featVec=reshape(snipsCmx,[],length(snips(1,1,1,:)))';
% featVec=[real(featVec),imag(featVec)];
featVec=abs(featVec); featVec=featVec./sum(featVec,2);

featVecAll=[featVecAll;featVec(1:end,:)];
    end
end
im
end
%%
rng(1);
KLdiv=@(vi,vj) sum((vi-vj).*log(vi./vj),2); %symmetrized K-L divergence
featRed=tsne((featVecAll(1:2:end,:)));%,'Distance',KLdiv);%,'Exaggeration',50);%,'Standardize',true);
%
figure; scatter(featRed(:,1),featRed(:,2),[],1:length(featRed(:,1)))
% plot(featRed(:,1),featRed(:,2),'.');
return;
%% Construct permutation-invariant feature-vectors
% clear piDat;
% piDat(1,:,:,:)=mean(snipsCmx); %A+B+C
% piDat(2,:,:,:)=prod(snipsCmx).^(1/Nsm); %A*B*C
% piDat(3,:,:,:)=sqrt(mean(snipsCmx.*[snipsCmx(2:end,:,:,:);snipsCmx(1,:,:,:)])); %AB+BC+CA
% piDat(4,:,:,:)=(prod(snipsCmx-[snipsCmx(2:end,:,:,:);snipsCmx(1,:,:,:)])).^(1/Nsm); %(A-B)(B-C)(C-A)
% 
% subplot(211),plot(squeeze((real(snipsCmx(:,3,:,sTst))))');
% subplot(212),plot(squeeze((real(piDat(:,3,:,sTst))))')
%% Distance matrix

%Eucledian in Fourier space
% distDat=snipsCmx;
% for si=1:length(distDat(1,1,1,:))
%     distMx(si,:)=mean(mean(mean(abs(distDat(:,:,:,si)-distDat))));
% end
%% Clustering data
clustIx=clusterdata(featVec',5);
plot(clustIx)
%%
featVec=reshape(snips,[],length(snips(1,1,1,:)));
% featVec=[real(featVec);imag(featVec)];
[cent, val]=fcm(featVec',3,[2.5,NaN,NaN,0]);
clf; subplot(414), plot(val')
subplot(411);plot(squeeze(relDat(:,1,:))')
subplot(412);plot(squeeze(relDat(:,2,:))')
subplot(413);plot(squeeze(relDat(:,3,:))')
return;
%% Snippets PCA
distMx=zeros(length(snips(1,1,1,:)));
%Correlation in real space
mnSnips=mean(snips,3);
for si=1:length(distMx(:,1))
    distMx(si,:)=sum(sum(mean(snips(:,:,:,si).*snips,3)-mnSnips(:,:,1,si).*mnSnips));
end
distMx=distMx-diag(diag(distMx));
[Bcorr,ecorr]=eig(distMx,'vector');
[ecorr, srtIx]=sort(ecorr,'descend');  Bcorr=Bcorr(:,srtIx);
% ed(ed<20)=0;
corrMx=Bcorr(:,end)*Bcorr(:,end)';
clf; plot(Bcorr(:,1:4));
% clf; surf(corrMx); view([0,0,1]);
return

%% Show smarticle motion---------
clf; hold on;
th=0:0.01:2*pi; tiSp=find(t>52,1);
for ti=1%400:1:length(t)-1
    crd=smcle2coord(crdDat(:,:,ti));
    clf; hold on; axis([-0.5,0.5,-0.5,0.5]*(windSize+B)*1.5); axis square;
    plot(crd(:,1:2:end)',crd(:,2:2:end)','-','LineWidth',2)%,'Color',[1,1,1]*0.9); 
%     cla; plot(crd(:,3:2:5)',crd(:,4:2:6)','-','LineWidth',1);
    plot(crdDat(:,1,ti),crdDat(:,2,ti),'k.','MarkerSize',15);
%     plot(crdDat(11:end,1,ti),crdDat(11:end,2,ti),'r.','MarkerSize',15);
    plot(windSize*cos(th)/2,windSize*sin(th)/2);  %plot circle
    title(round(t(ti),2));
    pause(0.01)
end

