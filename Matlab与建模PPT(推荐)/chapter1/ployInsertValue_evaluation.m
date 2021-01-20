clc;
clear;
%% 调用拉格朗日插值函数，生成8次和29次多项式插值结果
x=0:0.5:64;
y1=0:8;
y2=0:30;
x_k1=y1.^2;
x_k2=y2.^2;
num=length(x);
result_y1=eye(1,num);
result_y2=eye(1,num);
for i=1:num
    result_y1(i)=lagrangeInsertValue(x_k1,y1,x(i));
    result_y2(i)=lagrangeInsertValue(x_k2,y2,x(i));
end
y_orig=sqrt(x);
total=[x',y_orig',result_y1',result_y2']
%% 画图进行对比
% 8次多项式插值图像和原函数图像对比
subplot(2,1,1) 
plot(x,result_y1,x,y_orig)
title('8次多项式插值图像和原函数图像对比')
% 29次多项次插值和原函数图像对比
subplot(2,1,2)
plot(x,result_y2,x,y_orig)
title('29次多项式插值图像和原函数图像对比')
%% 将得到的结果写入excel表格
file_name='C:\Users\Administrator\Desktop\result.xls';
xlswrite(file_name,total,'sheet1','A2')
%% 拉格朗日插值函数
function res_y=lagrangeInsertValue(x_k,y,x)
n=length(x_k);
l=ones(1,n);
% 计算基函数
for i=1:n
    for j=1:n
        if(i~=j)
            l(i) = l(i)*((x-x_k(j))/(x_k(i)-x_k(j)));
        end
    end
end
% 计算该点的值
res_y=0;
for i=1:n
     res_y= res_y+y(i)*l(i);
end
end