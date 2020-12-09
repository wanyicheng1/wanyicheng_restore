x=-1:0.2:1;
y=1./(1 + 25 * x .* x);
y0=50/26*26;          %  S'(x0)=f'(x0)=y0   
yn=-50/26*26;          %  S'(xn)=f'(xn)=yn
x0=-1:0.2:1;
s=threesimple1(x,y,x0,y0,yn)
plot(x0,s)        %绘制第一边界条件插值函数图像
hold on
grid on
plot(x,y)
%axis([0.2 0.55 0.4 0.75])
xlabel('自变量 X'), ylabel('因变量 Y')
title('插值点与三次样条函数') 
legend('三次样条插值点坐标','插值点')
xi = -1 + (0:10) * 0.2;
f = 1./(1+25*xi.*xi);
p = polyfit(xi,f,3);
x1 = -1 : 0.01 : 1;y1 = 1 ./ (1+25*x.^2);y2 = polyval(p,x);
plot(xi,f,'bo',x1,y1,'b--',x1,y2,'r');
legend('节点du','函数f(x)','三次曲zhi线拟合')
function [D,h,A,g,M]=three1(X,Y,y0,yn)
%        自然边界条件的三次样条函数(第一种边界条件)
%        此函数为M值求值函数
%        D,h,A,g,M输出量分别为系数矩阵D，插值宽度h，差商表A，g值,M值 
         n=length(X); 
         A=zeros(n,n);A(:,1)=Y';D=zeros(n,n);g=zeros(n,1);
         for  j=2:n
            for i=j:n
                A(i,j)=(A(i,j-1)- A(i-1,j-1))/(X(i)-X(i-j+1));
            end
         end
         
         for i=1:n-1
             h(i)=X(i+1)-X(i);
         end
         for i=1:n
             D(i,i)=2; 
             D(1,2)=1;
             D(n,n-1)=1;
             if (i==1)
                 g(i,1)=6/h(i)*(A(2,2)-y0); 
             elseif (i==n) 
                     g(i,1)=6/h(i-1)*(yn-A(i,2));
             else 
                 g(i,1)=(6/(h(i-1)+h(i)))*(A(i+1,2)-A(i,2));
             end
           
         end  
         for i=1:n-2
             u(i)=h(i)/(h(i)+h(i+1));
             n(i)=1-u(i);  
             D(i+1,i+2)=n(i);
             D(i+1,i)=u(i);             %改到这里
         end
         M=D\g;
         %M=[0;M;0];         
end

function s=threesimple1(X,Y,x,y0,yn)
%        三次样条插值函数第一类型代码 
%        s函数表示三次样条插值函数插值点对应的函数值
%        根据三次样条参数函数求出的D,h,A,g,M
%        x表示求解插值点函数点，X为已知插值点        
         [D,h,A,g,M]=three1(X,Y,y0,yn)
         n=length(X); m=length(x);    
         for t=1:m
            for i=1:n-1
               if (x(t)<=X(i+1))&&(x(t)>=X(i))
                  p1=M(i,1)*(X(i+1)-x(t))^3/(6*h(i));
                  p2=M(i+1,1)*(x(t)-X(i))^3/(6*h(i));
                  p3=(A(i,1)-M(i,1)/6*(h(i))^2)*(X(i+1)-x(t))/h(i);
                  p4=(A(i+1,1)-M(i+1,1)/6*(h(i))^2)*(x(t)-X(i))/h(i);
                  s(t)=p1+p2+p3+p4; 
                  break;
               else
                   s(t)=0; 
               end
            end
         end
end
