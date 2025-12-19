
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    // Condionais lógicas
    /* AND - &&, E, ^ = Esse operador lógico ele válida as Condionais efetuando uma multiplicação
    Obs: Ele apenas resultará verdadeiro de todos forem verdeiros.*/
    /* OR - || = Valida se pelo menos uma das condições são verdadeiras. */
    
    // Exemplo de uso:
    
    /*1 - Escreva um programa solicita um numero e exibe a mensagem "SENAC" 
    se este número for 14, 24, 23, 32 ou 33.*/
    
    int x;
    
    printf("Escreva um número de 0 a 100 sendo ele inteiro");
    scanf("%d",&x);
    if(x == 14 || x == 24 || x == 23 || x == 32 || x == 33)
    {
        printf("SENAC - BACHAREL EM CIÊNCIA DA COMPUTAÇÃO");
    }
    
    else
    {
        printf("Hello !!");
    }
    
    return 0;
}
