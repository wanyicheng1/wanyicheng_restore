x0=[3;2.5];
VLB=[0 0];VUB=[5 10];
[x,fval,exitflag,output]=fmincon('fun',x0,[],[],[],[],VLB,VUB,'mycon2')
