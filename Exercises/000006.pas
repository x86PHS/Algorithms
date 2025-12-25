PROGRAM ex000006;
USES CRT;
VAR salario,imposto, gratificacao : REAL;
BEGIN
    write('Salario:');read(salario);
    imposto := salario * 7/100;
    gratificacao := salario * 5/100;
    salario := salario + gratificacao - imposto;
    write('Novo salario: R$ ');write(salario:2:2);
END. 