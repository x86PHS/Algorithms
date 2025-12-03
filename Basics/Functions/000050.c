#include<stdio.h>
#include <stdbool.h>

    /* 4 - Escreva uma função chamada EhPrimo( ), que recebe um número inteiro e 
    retorna um valor booleano indicando se o número é primo.*/ 

bool EhPrimo(int a){
    int counter = 0;
    for(int x = 1;x < a;x++){
        if(a % x == 0){
            counter++;
        }
    }
    if(counter > 1){
        return false;
        
    }
    else{
        return true;
    }
}

int main()
{
    int num1;
    printf("Escreva um número e se é primo");
    scanf("%d",&num1);
    printf("%d",EhPrimo(num1));
    return 0;
}
