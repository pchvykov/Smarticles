%Running basic smarticles ensemble
%Pavel Chvykov
clear all
%---------------------

rng(1);
global A B tRes; B=1; A=1.1; %smarticle size
Nsm=20; tRes=0.05; tMax=12000; %number of smarticles
t=0:tRes:tMax; %time domain
windSize=B*1.3*sqrt(Nsm); Upow=20; %size and power of central potential
% freqList(11:end)=1;
% freqList=[1;1]; phaseList=[-pi/4; pi/2];
fricCoeff=1+0*(rand(Nsm,1)-0.5); %friction coefficients for different smcles
% fricCoeff=[1.5,0.4];

%vary parameters: freq; windSize; n2; fricCoeff
nRuns=30;
% fname=[datestr(datetime('now')),'phase_sep.mat']; %file name to save
% matFld = matfile([datestr(datetime('now')),'phase_sep.mat'],'Writable',true);
saveDat(nRuns).B=1;
fname = [datestr(datetime('now')),'phase_sep.mat']; %file name
% freqNx=3; fricNx=1; windSize=13.5; %initialize MH
for ip=1:nRuns
    n2=Nsm/2;%+randi(15); 
    freqList=ones(Nsm,1); phaseList=ones(Nsm,1); fricCoeff=ones(Nsm,1);
    freqNx=1;%exp(0.5+rand); 
    windSize=windSize+0.2*(rand-0.5); fricNx=1;%exp(2*rand-1); 
    freqList(n2:end)=freqNx; phaseList(n2:end)=rand*2*pi;
    fricCoeff(n2:end)=fricNx;
%     phaseList=2*pi*rand(Nsm,1)*ip/nRuns/2;
    
    crdDat=runSmarticles_mex(tMax, windSize, Upow, freqList, phaseList, fricCoeff);
    
    delt=round(length(t)/1000);
    saveDat(ip).crd=crdDat(:,:,1:delt:end);
    saveDat(ip).t=t(1:delt:end);
    saveDat(ip).freq=freqList; saveDat(ip).phase=phaseList;
    saveDat(ip).fric=fricCoeff; saveDat(ip).wind=windSize; 
    saveDat(ip).n2=n2; saveDat(ip).Upow=Upow; 
    saveDat(ip).tRes=tRes; saveDat(ip).A=A; saveDat(ip).B=B;
%     parsave(fname, saveDat(ip));
    ip
    save(fname,'saveDat');
%     %% ------------Success metric---------------
%     %fraction of same neighbors over different neighbors
%     tiMax=length(crdDat(1,1,:));
%     for ti=tiMax-100:tiMax
%     xCrd=repmat(crdDat(:,1,ti),1,Nsm); yCrd=repmat(crdDat(:,2,ti),1,Nsm);
%     ngbd=(xCrd-xCrd').^2+(yCrd-yCrd').^2<(B+2*A).^2; %adjacency matrix
%     sameNb=mean([(sum(ngbd(1:n2,1:n2))-1)/(n2-1),(sum(ngbd(n2+1:end,n2+1:end))-1)/(Nsm-n2-1)]);
%     diffNb=mean([sum(ngbd(1:n2,n2+1:end))/n2,sum(ngbd(n2+1:end,1:n2))/(Nsm-n2)]);
%     fracNbs(tiMax-ti+1)=sameNb/diffNb;
%     end
%     fracNbsM(ip)=mean(fracNbs); %this is the success criterion
%     
%     freqRuns(ip)=freqNx; fricRuns(ip)=fricNx; windRuns(ip)=windSize; %store parameters
%     hold off; scatter(freqRuns,fricRuns,1:ip,fracNbsM); title(windSize); pause(0.01);
%     %% ----Metropolis-Hastings for next point:----
%     if(ip>1 && fracNbsM(ip)/fracNbsM(ip-1)<1)%rand) %then reject the last move (step back)
%         freqNx=freqRuns(ip-1); fricNx=fricRuns(ip-1); windSize=windRuns(ip-1);
%     end
%     %propose next step:
%     freqNx=exp(log(freqNx)+0.4*randn()); fricNx=exp(log(fricNx)+0.2*randn());
%     windSize=windSize+0.1*randn();
    
end

return;

% function parsave(fname, saveDat)
%     save(fname, 'saveDat')
% end
