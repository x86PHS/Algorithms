/*
REVISÃO 2

Escreva um programa que imprime uma tabela com a tabuada de 1 a 9
*/

#include <stdio.h>

void tab(int x){
    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n",x,i,x*i);
    }
}

int main() {
    
    int x;
    
    printf("Escreva um número para saber sua tabuada:");
    scanf("%d",&x);
    tab(x);
	return 0;
}
