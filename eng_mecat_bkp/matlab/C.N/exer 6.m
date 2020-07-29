clear
disp('Quantas coordenadas tem o vetor?')
n=input('');
disp('digite as coordenadas')
a=1;
while a<=n 
    v(a)=input('');
    a=a+1;
end
b=1;
for b=1:n
    a=1;
    for a=1:n
        for i=1:n
            if(v(a)<v(i))
                v(i)= (v(a) + v(i)); v(a)= (v(i) - v(a)); v(i)= (v(i) - v(a));     
            end
        end
        a=a+1;
    end 
b=b+1;
end
v