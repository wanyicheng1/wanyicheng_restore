clear
clc
% x = [1,2,3,4,5]
% y = [4,4.5,6,8,8.5]
x = -1:0.2:1;
y = 1./(1 + 25 * x .* x);
x_t = -1:0.01:1;
y_t = 1./(1 + 25 * x_t .* x_t);
figure
plot(x,y,'ro',x_t,y_t);
hold on
N = 4;
A = zeros(N,N);
B = zeros(N,1);
for i = 1 : N
    for j = 1 : N
        A(i,j) = sum(x.^(i + j - 2));
    end
    B(i) =  x.^(i-1) * y';
end
C = inv(A)*B;
y_fit = 0;
for i = 1 : N
    y_fit = y_fit + C(i) * (x.^(i-1));
end
p1=polyfit(x,y,3);
y_fit2 = polyval(p1,x_t);
y_Insert = spline(x,y,x_t);
plot(x,y_fit,'b',x_t,y_fit2,'g',x_t,y_Insert);
