
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    /* 3 - Faça um algoritmo que receba um número e mostre uma mensagem caso 
    este número seja maior que 80, menor que 25 ou igual a 40.
    */
    
    int x;
    
    printf("Digite um número de 0 a 100");
    scanf("%d",&x);
    
    if(x > 80 || x < 25 || x == 40){
        
        printf("\nO número que você digitou é especial para mim...");
    }

    return 0;
}
