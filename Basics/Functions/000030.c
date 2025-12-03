#include<stdio.h>
#include <stdbool.h>

    /* 3 - Escreva uma função chamada Absoluto( ), que recebe um número inteiro e retorna o valor 
    absoluto deste número. (Se recebe 3, retorna 3. Se recebe -4, retorna 4).*/ 

int absoluto(int a){
    if(a < 0){
        return -a;
        // This return works cause in this conditional, when a it's -a, it's do a operation unary
        // like -(-7) - It's how like a mathmatical operation
    }
    else{
        return a;
    }
}

int main()
{
    int num1;
    printf("Escreva um número e veja seu valor Abosluto");
    scanf("%d",&num1);
    printf("Valor absoluto de %d é |%d|",num1, absoluto(num1));
    return 0;
}
