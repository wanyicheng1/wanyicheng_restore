    c=[6 3 4];
    A=[0 1 0];
    b=[50];
    Aeq=[1 1 1];
    beq=[120];
    vlb=[30,0,20];
    vub=[];             
    [x,fval]=linprog(c,A,b,Aeq,beq,vlb,vub)
   