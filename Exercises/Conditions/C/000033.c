#include<stdio.h>

int main()
{
    /*
    7 - Crie um programa que desafia o usuário digitar um número maior que 40
    que seja múltiplo de 5 e 7. Se ele conseguir, deve receber uma mensagem de parabéns.
    */
    
    int x;
    
    printf("Digite um número superior a 40!");
    scanf("%d",&x);
    
    if(x > 40 && x % 5 == 0 && x % 7 == 0){
        printf("Parabéns, você descobriou um número superior a 40, Múltiplo de 5 e 7.");
    }
    return 0;
}
