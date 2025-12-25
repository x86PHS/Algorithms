PROGRAM ex000005;
USES CRT;
VAR salario: real;
    percentual: integer;
BEGIN
    write('Salario:');read(salario);
    write('Aumento Percentual:');read(percentual);
    salario := salario + salario * (percentual/100);
    write('O aumento de ');write(percentual);write('% e de: R$ ');write(salario:2:2);
END.