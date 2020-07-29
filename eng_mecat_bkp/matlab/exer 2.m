disp('Digite a ordem do vetor')
n=input('');
disp('digite as coordenadas')
a=1;
while a<=n 
    v(a)=input('');
    a=a+1;
end
a=1;
maior=0;
while a<=n
    if(maior<v(a))
        maior=v(a);
    end
    a=a+1;
end
maior