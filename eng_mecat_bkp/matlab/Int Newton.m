clear,clc
x=[0 0.5 1 1.5];
n=4;e=1;
f=zeros(n); p=f;
f(1,:)=[0 1.1487 2.7183 4.9811];
i=1;j=0;k=1;
while i<=(n-1)
    j=j+1; 
    c=(f(i,j)-f(i,j+1));   
    b=(x(j)-x(j+k)); 
    f(i+1,j)=c/b;
    if(j==n-k)
        i=i+1;j=0;k=k+1; 
    end
end
i=1;j=1;k=n;
for i=1:n
    while j<=(n-k)
        y=[1 -x(j)]
        e=conv(e,y)
        j=j+1;
    end
    p(i,n-(j-1):n)=(f(i,1)*e);
    k=k-1;j=1;e=1;
end
P=sum(p,1);