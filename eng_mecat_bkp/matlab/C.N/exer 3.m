disp('Digite a ordem do vetor')
n=input('');
disp('digite as coordenadas')
a=1;
while a<=n 
    v(a)=input('');
    a=a+1;
end
a=1;
p=0;s=0;t=0;
while a<=n
    if(p<v(a))
        p=v(a);
    end
    a=a+1;
end
a=1;
while a<=n
    if(s<v(a)&v(a)<p)
        s=v(a);
    end
    a=a+1;
end
a=1;
while a<=n
    if(t<v(a)&v(a)<s)
        t=v(a);
    end
    a=a+1;
end
disp('Terceiro maior numero do vetor')
t