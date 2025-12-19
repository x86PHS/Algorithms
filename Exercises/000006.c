/*
Guido é um cientista, ele foi chamado para resolver um problema da usina do senhor Ambrósio. Senhor Ambrósio quer construir uma 
usina de tratamento de água onde o aproveitamento do espaço seja o melhor possível. 
Ele lhe deu uma folha que contém o raio dos locais onde pretende fazer os tanques redondos.
Ele espera receber de Guido dados que contenham a área de cada tanque o qual lhe deu o raio.
Porém Guido está muito atarefado e pediu sua ajuda para fazer um programa que possa calcular a 
área de cada tanque de forma mais rápida.
Considerando que para este problema π = 3.14159. 
*/

#include <stdio.h>
#define pi 3.14159

int main() {
    
    double r,area;
    scanf("%lf",&r);
    area = (r*r) * pi / 10000;
    printf("Area = %.4lf",area);
    
    
	return 0;
}
