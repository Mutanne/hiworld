disp('Determine a ordem da matriz')
n=input('');
m=zeros(n);
a=0
b=1
disp('digite os elementos')
while b<=n
    a=a+1;         
    m(a,b)=input('')
    if(a==n)
        a=0;
        b=b+1;
    end 
end
disp('Determinante:')
det(m)
