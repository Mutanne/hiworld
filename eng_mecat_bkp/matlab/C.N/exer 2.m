disp('Quantas coordenadas tem o vetor?')
n=input('');
disp('digite as coordenadas')
a=1;
while a<=n 
    v(a)=input('');
    a=a+1;
end
a=1;
maior=0;
for a=1:n
    for i=2:n
        if(v(a)<v(i))
            v(a)= (v(a) + v(i)); v(i)= (v(a) - v(i)); v(a)= (v(a) - v(i)); i=i+1;    
        end
    end
    a=a+1;
end 
v(1)