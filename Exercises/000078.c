/*
REVISÃO 1

Escreva um programa que pergunte um valor em metros e imprima o
correspondente em decímetros, centímetros e milímetros.
*/

#include <stdio.h>


int main() {
    float x;
    
    printf("Escreva um valor em Metros (M):");
    scanf("%f",&x);
    
    float dc, cm, ml;
    dc = x / 10;
    cm = x / 100;
    ml = x / 1000;
    
    printf("%.2f\n%.2f\n%.2f\n",dc,cm,ml);
    
	return 0;
}
