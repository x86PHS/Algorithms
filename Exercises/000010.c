/*
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D.
*/

#include <stdio.h>

int main() {
    
    int number;
    float salario,bonus,x;
    
    scanf("%d%f%f",&number,&x,&bonus);
    salario = x * bonus;
    printf("NUMBER = %d\n",number);
    printf("SALARY = R$ %.2f",salario);
    
	return 0;
}
