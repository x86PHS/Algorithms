PROGRAM ex000010;
USES CRT;
VAR area, raio : REAL;
BEGIN 
    write('Raio:');read(raio);
    area := 3.1415 * (raio*raio);
    write('Area do circulo:');write(area:2:3);
END.