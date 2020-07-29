disp('Determine a ordem da matriz')
n=input('');
m=eye(n);
a=0;
b=1;
disp('digite os elementos')
while b<=n
    a=a+1;         
    m(a,b)=input('')
    if(a==n)
        a=0;
        b=b+1;
    end 
end
a=0;b=1;x=0;
while b<=n
    a=a+1; 
    if(x<m(a,b))
        x=m(a,b)
    end
    if(a==n)
        b=b+1;a=0;
    end
end
disp('matriz')
m
disp('Maior numero da matriz')
x

