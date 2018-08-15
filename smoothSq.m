function [f]=smoothSq(t)

ph=mod(t+3*pi/4,2*pi);
f=ones(size(t));
f(ph<pi/2)=cos(2*ph(ph<pi/2));
f(ph>=pi/2 & ph<pi)=-1;
f(ph>=pi & ph<3*pi/2)=cos(2*ph(ph>=pi & ph<3*pi/2)-pi);
% f(f==10)=1;
end