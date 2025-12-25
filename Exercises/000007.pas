PROGRAM ex000007;
USES CRT;
VAR salario, imposto : REAL;
BEGIN
    write('Salario base:');read(salario);
    imposto := 10/100 * salario;
    salario := salario + 50 - imposto;
    write('Salario liquido: R$ ');write(salario:2:2);
END.