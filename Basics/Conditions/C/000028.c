
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    //2 - Escreva um programa que solicita um número inteiro. Exiba uma mensagem de erro 
    // se o número informado estiver entre 15 e 25 ou entre 45 e 50 (inclusive).
    
    int x;
    
    printf("Digite um número");
    scanf("%d",&x);
    
    if(x > 15 && x < 25 || x > 45 && x < 50){
        printf("\nERRO !!!!!!");
    }
    else{
        printf("\nSENAC- BCC");
    }
    return 0;
}
