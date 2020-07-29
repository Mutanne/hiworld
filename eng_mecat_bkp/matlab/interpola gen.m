clear,clc
c=1;
while c~=0
    clc
    disp('Quantos pontos?')
    n=input('');
    disp('Digite as coordenadas:')
    for k=1:n
        fprintf('X%d= ',k)
        x(k)=input('');
        fprintf('Y%d= ',k)
        f(k,1)=input('');
    end
    i=1;j=0; 
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
        if(P(i)<0)
            fprintf(' %d.X^%d ',R(i,j),k)
        else
            fprintf(' +%d.X^%d ',R(i,j),k)
        end
        i=i-1;
        k=k-1;
    end
    disp(' Mais um? (1=sim, 0=nao')
    c=input('');
end











