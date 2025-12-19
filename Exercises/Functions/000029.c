#include<stdio.h>
#include <stdbool.h>

    /* 2 - Escreva uma função chamada EhPar( )]
    que recebe um número inteiro 
    retorna um valor booleano indicando se o número é par.*/ 

bool EhPar(int a){
    if(a % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int num1;
    printf("Escreva um número");
    scanf("%d",&num1);
    printf("%d",EhPar(num1));
    return 0;
}
