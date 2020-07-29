clear,clc
c=1;
while c~=0 
    n=input('Digite o tamanho do sistema: ');
    A=zeros(n);
    B=ones(n,1);  X1=zeros(n,1);   X0=B;   g=X0;
    i=1; j=1; q=0; b=ones(1,n);  
    disp('Digite a matriz "A" (coeficientes) por linha')
    while i<=n
       fprintf('A(%d,%d)= ',i,j)
        A(i,j)=input('');
        j=j+1;
        if(j>n)
            j=1;i=i+1;
        end
    end
    for i=1:n %Criterio d Sassenfeld, convergencia            
        for j=1:n
            if(i~=j)
                q=(q+(A(i,j)*b(j)));
            end    
        end    
        b(i)=(1/A(i,i)*q);q=0;
    end 
    if(max(abs(b))<1)
        disp('Digite o vetor coluna "B" (resultado eq)')
        for i=1:n
            fprintf('B%d= ',i)
            B(i,1)=input('');
        end 
        if(e~=0)
            disp('Deseja manter X(0)anterior? (1=s;0=n)')
            q=input('');
        end 
        if(q==0)
            disp('Digite a 1º aproximaçao')
            for i=1:n
                fprintf('X0-%d= ',i)
                X2(i,1)=input('');
            end  
        end 
        X0=X2;
        if(e~=0)
            fprintf('Deseja manter tol= %d? (1=s;0=n)',e)
            q=input('');
        end 
        if(q==0)
            e=input('Digite a tolerancia: '); q=0;
        end 
        while Mr > e
            for i=1:n          
                for j=1:n
                    if(i~=j)
                        q=(q-(A(i,j)*X0(j,1)));
                    end     
                end     
                X1(i,1)=(1/A(i,i))*(B(i,1)+q);
                M(i)=(X1(i,1)-X0(i,1))/X1(i,1); q=0;
                X0(i,1)=X1(i,1);
            end
            Mr=max(M);
        end 
        for i=1:n
            fprintf('X%d= %d\n',i,X0(i,1)) 
        end  
    else
        disp('Nao converge neste metodo.Tente trocar as linhas.')
    end  
    c=input('Mais uma operaçao (1=s;0=n)?');
end
