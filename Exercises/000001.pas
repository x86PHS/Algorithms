PROGRAM ex000001;
USES CRT;
VAR x1,x2,x3,x4,soma: integer;

BEGIN
    write('N1:');
    read(x1);
    write('N2:');
    read(x2);
    write('N3:');
    read(x3);
    write('N4:');
    read(x4);
    soma := x1 + x2 + x3 + x4;
    write('SOMA:'); write(soma);
END.