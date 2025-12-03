#include<stdio.h>

    /* Escreva uma função chamada Potencia(base, expoente) que, quando chamada, retorna baseexpoente. Por exemplo, potencia(2, 5) deve retornar 32. 
    Assuma que expoente é sempre um número inteiro maior ou igual a 1. 
    Sua função deve calcular o valor através de uma estrutura de repetição 
    sem chamar a função de potência da linguagem C.*/ 

int Mypow(int base,int exponent){
    result=1
    for(int i=0; i < exponent; i++){
        result *=base;
    }
    return result;

int main()
{
    int base, exponent;
    printf("Entre dois número: Base - Expoente");
    scanf("%d",&base);
    scanf("%d",&exponent);
    printf("%d",Mypow(base,exponent));
    
    return 0;
}
