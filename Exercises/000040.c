
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    // Código - Resolução de problema que tinha como intuito apenas calcular a média de 3 números inteiros
    
    float x,y,z,media;
    
    printf("Escreva a primeira nota: ");
    scanf("%f",&x);
    
    printf("\nEscreva a segunda nota: ");
    scanf("%f",&y);
    
    printf("\nEscreva a terceira nota: ");
    scanf("%f",&z);
    
    media= (x+y+z) / 3;
    
    printf("O resultado da média entre: %.2f + %.2f + %.2f é de %.2f.",x,y,z,media);
    
    return 0;
}
