%������������ϵ����
c = [40;36];
A=[-5 -3];
b=[-45];
Aeq=[];
beq=[];
vlb = zeros(2,1);
vub=[9;15];
%Ȼ�����linprog������
[x,fval] = linprog(c,A,b,Aeq,beq,vlb,vub)
