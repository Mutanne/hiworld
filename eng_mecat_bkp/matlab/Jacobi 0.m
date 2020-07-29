clear,clc
disp('Digite o tamanho do sistema: ')
n=input('');
A=zeros(n); C=zeros(n);
B=zeros(n,1); X0=zeros(n,1); X1=zeros(n,1); g=zeros(n,1);
i=1; j=1; c=0; e=0; dm=inf; q=0;
disp('Digite a matriz "A" (coeficientes) por linha')
while i<=n
    fprintf('A(%d,%d)= ',i,j)
    A(i,j)=input('');
    j=j+1;
    if(j>n)
        j=1;i=i+1;
    end
end
for i=1:n %Criterio das linhas, convergencia          
    for t=1:n
        c=c+A(i,t);
    end
    c=c-A(i,i);
    if(c>A(i,i))
        q=q+1;
    end
    c=0;
end
if(q==0)
    disp('Digite a tolerancia')
    e=input('');
    disp('Digite o vetor coluna "B" (resultado eq)')
    for i=1:n
        fprintf('B%d= ',i)
        B(i,1)=input('');
    end
    disp('Digite a 1º aproximaçao')
    for i=1:n
        fprintf('X0-%d= ',i)
        X0(i,1)=input('');
    end 
    for i=1:n  %calculo Matriz C           
        for t=1:n
            C(i,t)=(-A(i,t)/A(i,i));
        end
        C(i,i)=0;
    end
    for i=1:n %calculo vetor g
        g(i,1)=B(i,1)/A(i,i);
    end
    
    while dm>e %calculo X1
        for i=1:n
            X1=(C*X0+g);
            d(i)=abs(X1(i,1)-X0(i,1));
        end
        dm=(max(max(d))/max(max(abs(X1))));
        X0=X1;
    end    
    j=n+1;
    for i=1:n
        fprintf('X%d= %d\n',i,X0(i,1)) 
    end
else
    disp('Nao converge neste metodo')
end
    
