clear
x=linspace(0,2*pi,30);
y=sin(x);
z=cos(x);
x1=0:0.001:3;
yr=-exp(-x1)+x1.*x1-x1+1;
plot(x,y,'r',x,z,'go',x1,yr,'b')
ezplot('-exp(-x1)+x1.*x1-x1+1',[0,1])


