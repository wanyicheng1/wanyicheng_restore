clear;
clc;
a=0;b=1;
N=5:5:1000;
h = (b-a)./N;
for i = 1:length(N)
    x = a : h(i) : b;
    T(i) = txqj(x,h(i),N(i));
    S(i) = xpsqj(x,h(i),N(i));
end
z = -4/9;
T1 = T-z;
S1 = S-z;
X = 1:length(T1);
plot(X(1:40),T1(1:40),X(1:40),S1(1:40))

%% 根据x值计算函数值
function s = f(x)
for i = 1 : length(x)
    if x(i) ~= 0
        s(i) = sqrt(x(i)) * log(x(i));
    else
        s(i)=0;
    end
end
end
%% 复合梯形求积公式
function T = txqj(x,h,N)
ss=0;
for i = 2 : N
    ss = ss + f(x(i));
end
T = h/2 * (f(x(1)) + 2*ss + f(x(end)));
end
%% 复合辛普森求积公式
function S = xpsqj(x,h,N)
ss=0;sss=0;
for i = 1:N
    x_k = x(i) + 1/2*h;
    ss = ss + f(x_k);
end
for i = 2:N
    sss = sss + f(x(i));
end
S = h/6 * (f(x(1)) + 4*ss + 2*sss + f(x(end)));
end