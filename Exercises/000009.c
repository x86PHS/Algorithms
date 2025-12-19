/*
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D.
*/

#include <stdio.h>

int main() {
    
    int a,b,c,d,diferenca;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    diferenca = (a * b) - (c * d);
    printf("DIFERENCA = %d",diferenca);
    
	return 0;
}
