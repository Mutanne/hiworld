clear,clc
x=[-1 0 3];
f=[15 ;8 ;-1];
n=3;i=1;j=0; 
A=zeros(n);
p=zeros(1,n);
while i<=n
    for k=0:(n-1)
        j=j+1;
        A(i,j)=(x(i))^k;
        if(j==n)
            j=0;i=i+1;
        end
    end
end
M=[A f]; i=n; k=n-1; j=n+1;
R=rref(M);
disp('Polinomio resultante:');
while k>=0
    fprintf(' %d.X^%d ',R(i,j),k)
    i=i-1;
    k=k-1;
end













