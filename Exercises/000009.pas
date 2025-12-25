PROGRAM ex000009;
USES CRT;
VAR base, altura, triangulo : REAL;
BEGIN
    write('Base:');read(base);
    write('Altura:');read(altura);
    triangulo := (base * altura) / 2;
    write('Area do triangulo:');write(triangulo:2:3);
END.