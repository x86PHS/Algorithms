
#include<stdio.h>

int main()
{
    /*7 - Solicite que o usuário digite um número entre 10 e 20. 
    Se for digitado um numero inválido, peça novamente, até que ele digite um número correto.*/
    
    int num;
    printf("Digite um número.");
    scanf("%d",&num);
    while(num < 10 || num > 20){
    printf("Número inválido. Digite um número correto.\n");
    printf("Digite outro número");
    scanf("%d",&num);
    }
    printf("Parabéns...");
    return 0;
}
