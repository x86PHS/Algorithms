PROGRAM ex000003;
USES CRT;
VAR n1,n2,n3: real;
    p1,p2,p3: real;
    media: real;
BEGIN
    read(n1);read(p1);
    read(n2);read(p2);
    read(n3);read(p3);
    media := (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);
    write('Media ponderada:');write(media:1:1);
END.