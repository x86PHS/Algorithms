PROGRAM ex000002;
USES CRT;
VAR nota1,nota2,nota3,media: real;
BEGIN
    write('Nota 1:');
    read(nota1);
    write('Nota 2:');
    read(nota2);
    write('Nota 3:');
    read(nota3);
    media := (nota1 + nota2 + nota3) / 3 ;
    write('Nota media do aluno:'); write(media:1:1);
END.