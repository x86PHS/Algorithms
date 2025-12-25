PROGRAM ex000008;
USES CRT;
VAR dep, vt, rend, total: REAL;
BEGIN
    write('Deposito:');read(dep);
    write('Valor taxa:');read(vt);
    rend := dep * vt/100;
    total := dep + rend;
    write('R$ ');write(total:2:2);
END.