
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    // Código - Desafio 5.6 E (Leia dois números inteiros e devolva o quociente o resto entre eles)
    
    int x,y,quociente,resto;
    
    printf("--> O cálculo será feito de acordo com a ordem númerica que você colocar. <-- \n");
    
    printf("Escreva um número: ");
    scanf("%d",&x);
    
    printf("Escreva outro número: ");
    scanf("%d",&y);
    
    quociente= x / y;
    resto= x % y;
    
    printf("Digitados os números %d e %d, seu respectivo quociente e resto é de: %d e %d",x,y,quociente,resto);
    
    return 0;
}
