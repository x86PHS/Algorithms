
#include<stdio.h>

    /* 1 - Escreva uma função chamada MAX( ) que recebe dois números inteiros e retorna o maior deles.*/ 

int max(int a, int b){
    int maior;
    if(a > b){
        return a;}
    else if(b > a){
        return b;
    }
}

int main()
{
    int num1,num2;
    printf("Digite um número");
    scanf("%d",&num1);
    printf("Digite outro");
    scanf("%d",&num2);
    
    printf("Maior: %d", max(num1,num2));
    
    
    return 0;
}
