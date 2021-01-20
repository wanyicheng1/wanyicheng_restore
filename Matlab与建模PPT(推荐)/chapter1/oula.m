clear
x=0:0.1:1;
yr=-exp(-x)+x.*x-x+1;
f=x.*x+x-yr;
xn=0;
yn=0;
L=zeros(1,11);
for n=1:10
    yn1=yn+0.1*(xn^2+xn-yn); 
    if(n<=10)
        L(n+1)=yn1;
    end
    xn=xn+0.1;
    yn=yn1;
end
plot(x,yr,'b',x,L,'g')
xlabel('Variable X');
ylabel('Variable Y');
legend('真实函数','欧拉公式')