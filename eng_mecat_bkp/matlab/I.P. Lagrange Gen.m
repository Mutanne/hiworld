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
        f(k)=input('');
    end
    i=1;C=1;B=1;L=ones(n);
    A=zeros(n);P=zeros(1,n);p=L;
    for k=1:n
        C=1;B=1;c=ones(n,(n-1));b=ones(n,1);
        for i=1:n
            if(k~=i)
                c(i,:)=[1 -x(i)];
            end
            if(k~=i)
                b(i,:)=[x(k)-x(i)];
            end    
        end
        for i=1:n
            if(i~=k)
                C=conv(C,c(i,:));
            end
            if(b(i,:)~=0)
                B=B*b(i,:);
            end
        end
        L(k,:)=C/B;
    end
    for k=1:n
        p(k,:)= f(k)*L(k,:);
    end
    for k=1:n
        P=P+p(k,:); 
    end
    k=n-1;i=1;
    disp('Polinomio resultante:');
    for i=1:n
        if(P(i)<0)
            fprintf(' %d.X^%d',P(i),k)
        else
            fprintf(' +%d.X^%d',P(i),k)
        end
        k=k-1;
    end
    disp('|--> Mais um?(1=sim;0=nao)')
    c=input('');
end