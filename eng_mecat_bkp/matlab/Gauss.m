clear,clc
disp('Digite o tamanho do sistema: ')
n=input('');
A=zeros(n);
B=zeros(n,1);
i=1;j=1;
disp('Digite a matriz "A" (coeficientes) por linha')
while i<=n
    fprintf('A(%d,%d)= ',i,j)
    A(i,j)=input('');
    j=j+1;
    if(j>n)
        j=1;i=i+1;
    end
end
if(det(A)~=0)
    disp('Digite o vetor coluna "B" (resultado eq)')
    for i=1:n
        fprintf('B%d= ',i)
        B(i,1)=input('');
    end
    M=[A B];
    R=rref(M);
    j=n+1;
    for i=1:n
        fprintf('X%d= %d\n',i,R(i,j)) 
    end
else
    disp('Indeterminado ou impossivel!')
end
    
