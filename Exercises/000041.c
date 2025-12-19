
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    // Código - Desafio 5.6 D (Pegue quatro números e deles faça um produto entre eles.)
    
    int w,x,y,z,produto;
    
    printf("Primeiro num: ");
    scanf("%d",&w);
    
    printf("\nSegundo num: ");
    scanf("%d",&x);
    
    printf("\nTerceiro num: ");
    scanf("%d",&y);
    
    printf("\nQuarto num: ");
    scanf("%d",&z);
    
    produto= w*x*y*z;
    
    printf("O resultado do produto entre: %d, %d, %d e %d é de %d.",w,x,y,z,produto);
    
    return 0;
}
