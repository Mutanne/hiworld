clc
clear

l=input('Digite o numero de linhas/colunas da Matriz: ');
t=input('Digite a tolerancia: ');
c=l;
r=l;
for aux=1 : l
    
    aux2=1;
    
    for aux2=1 : c
        
       fprintf('Digite o coeficiente do elemento da Linha %d, Coluna %d: ',aux,aux2);
       matriz(aux,aux2)=input('');
         
          
    end
     fprintf('Digite o resultado dessa Equaçao:  ');
     resultado(aux,1)=input('');
     disp(' ')
    
end

%chute inicial%
for aux3=1 : l
    fprintf('Digite o valor de X%d inicial: ',aux3);    
    vetor(aux3)=input('');
end
vetor2=vetor;
cr=1;
while  cr > t
   

%matriz sem icognitas, ja multiplicamos pelos chutes 
for aux=1 : l
    
    for aux1=1:c
        if aux ~=aux1
           m(aux,aux1)= -(matriz(aux,aux1)*vetor2(aux1));
        else
           m(aux,aux1)= matriz(aux,aux1);
        end
    end
end
%isolar as icognitas

for aux=1 : l 
    x=0;
    for aux1=1: c 
        if aux ~=aux1 
            x=x+m(aux,aux1);
        end
    end
    vetor2(aux)= (x+resultado(aux,1))/m(aux,aux);
end
% acha o modulo do X1-X0
for aux=1 : l
    vetorr(aux)=abs(vetor2(aux)-vetor(aux)); 
end
vetor=vetor2;

%criterio de parada 

cr= max(vetorr)/max(abs(vetor2));

end   

for aux=1 : l
    fprintf(' X%d= %d',aux,vetor(aux));
end
