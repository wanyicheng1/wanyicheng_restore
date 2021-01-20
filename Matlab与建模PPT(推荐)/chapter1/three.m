x=-1:0.2:1;
y=1./(1 + 25 * x .* x);
y0=50/26*26;          %  S'(x0)=f'(x0)=y0   
yn=-50/26*26;          %  S'(xn)=f'(xn)=yn
x0=-1:0.2:1;
s=threesimple2(x,y,x0,y0,yn)
plot(x0,s)        %绘制第一边界条件插值函数图像
hold on
grid on
plot(x,y,'o')
axis([0.2 0.55 0.4 0.75])
xlabel('自变量 X'), ylabel('因变量 Y')
title('插值点与三次样条函数') 
legend('三次样条插值点坐标','插值点')
function [D,h,A,g,M]=three2(X,Y,y0,yn)
%        第二边界条件的三次样条函数(包含自然边界条件)
%        y0,yn表示的是S''(x0)=f''(x0)=y0，S''(xn)=f''(xn)=yn,自然边界即条件值为0 
%        此函数为M值求值函数
%        D,h,A,g,M输出量分别为系数矩阵D，插值宽度h，差商表A，g值,M值 
         n=length(X); 
         A=zeros(n,n);A(:,1)=Y';D=zeros(n-2,n-2);g=zeros(n-2,1);
         for  j=2:n
            for i=j:n
                A(i,j)=(A(i,j-1)- A(i-1,j-1))/(X(i)-X(i-j+1));
            end
         end
         
         for i=1:n-1
             h(i)=X(i+1)-X(i);
         end        
         for i=1:n-2
             D(i,i)=2;
             if (i==1)
                 g(i,1)=(6/(h(i+1)+h(i)))*(A(i+2,2)-A(i+1,2))-h(i)/(h(i)+h(i+1))*y0;
             elseif (i==(n-2))
                 g(i,1)=(6/(h(i+1)+h(i)))*(A(i+2,2)-A(i+1,2))-(1-h(i)/(h(i)+h(i+1)))*yn;
             else
                 g(i,1)=(6/(h(i+1)+h(i)))*(A(i+2,2)-A(i+1,2));
             end             
         end
         for i=2:n-2
             u(i)=h(i)/(h(i)+h(i+1));
             n(i-1)=h(i)/(h(i-1)+h(i));
             D(i-1,i)=n(i-1);
             D(i,i-1)=u(i);             
         end
         M=D\g;
         M=[y0;M;yn];         
end

function s=threesimple2(X,Y,x,y0,yn)
%        第二边界条件函数 
%        s函数表示三次样条插值函数插值点对应的函数值
%        根据三次样条参数函数求出的D,h,A,g,M
%        x表示求解插值点函数点，X为已知插值点        
         [D,h,A,g,M]=three2(X,Y,y0,yn)
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