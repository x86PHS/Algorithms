PROGRAM ex000004;
USES CRT;
VAR salario: real;
BEGIN
    write('Escreva seu salario:');read(salario);
    salario := salario * 1.25;
    write('Aumento de 25%:');write(salario:3:2);
END.