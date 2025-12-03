
#include<stdio.h>

int main()
{
    /*3 - Escreva um programa que solicita 5 números ao usuário 
    e para cada número digitado, informa se este é par ou ímpar.*/
    
    int num,count = 1;
    
    while(count <= 5){
        printf("\nEscreva um número...");
        scanf("%d",&num);
        if(num % 2 == 0){
            printf("Par",num);
        }
        else{
            printf("ímpar",num);
        }
        count++;
    }
    return 0;
}
