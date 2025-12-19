
#include<stdio.h>

int main()
{
    /* 7.1.1 Exercícios - D) Dizer se o número é par ou não*/
    
    int x;
    
    printf("Digite um número para saber se ele é par");
    scanf("%d",&x);
    
    if(x % 2 == 0){
        printf("O número que você digitou é par");
    }
    else{
        printf("O número que você digitou não é par");
    }
}
