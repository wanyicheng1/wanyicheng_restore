x=0:0.1:1;
yr=-exp(-x)+x.*x-x+1;
f=x.*x+x-yr;
x1=0;
yn=0;
L=zeros(1,11);
L(1)=0;
for n=1:10
    yn_1=yn+0.1*(x1^2+x1-yn);
    yn1=yn+0.05*((x1^2+x1-yn)+((x1+0.1)^2+(x1+0.1)-yn_1));
    if(n<=10)
        L(n+1)=yn1;
    end    
    x1=x1+0.1;
    yn=yn1;
end
plot(x,yr,':b',x,L,'g')
xlabel('Variable X');
ylabel('Variable Y');
legend('真实函数','改进的欧拉公式')