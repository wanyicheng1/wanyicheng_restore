clear
x=0:0.1:1;
yr=-exp(-x)+x.*x-x+1;
f=x.*x+x-yr;
x1=0;
yn=0;
L=zeros(1,11);
L(1)=0;
for n=1:10
    k1=x1^2+x1-yn;
    k2=(x1+0.05)^2+(x1+0.05)-(yn+0.05*k1);
    k3=(x1+0.1)^2+(x1+0.1)-(yn-0.1*k1+0.2*k2);
    yn1=yn+0.1*(k1+4*k2+k3)/6;
    if(n<=10)
        L(n+1)=yn1;
    end
    yn=yn1;
    x1=x1+0.1;
end
plot(x,yr,':b',x,L,'g')
xlabel('Variable X');
ylabel('Variable Y');
legend('真实函数','三阶龙格库塔')