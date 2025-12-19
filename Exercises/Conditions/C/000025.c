
#include<stdio.h>

int main()
{
    /*6 - Escreva um programa que solicita um número ao usuário, e então exibe todos os seus divisores. 
    Ex: Se informado 12, deve exibir: 12 6 4 3 2 1*/
    
    int count = 1,num,divisor = 1;
    printf("Digite um número para saber seus divisores.");
    scanf("%d",&num);
    while(count <= num){
    if(num % divisor == 0){
        printf("%d ",divisor);
    }
    divisor++;
    count++;
}
    return 0;
}
