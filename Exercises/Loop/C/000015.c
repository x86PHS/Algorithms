#include<stdio.h>

int main()
{
    int num1;
    
    printf("Digite um número para saber se é primo");
    scanf("%d",&num1);
    
    int counter=1,divisor=0;
    
    while(counter != num1){
        if(num1 % counter == 0){
            printf("\n%d é divisor de %d? Sim.",counter,num1);
            counter++;
        }
        else{
            printf("\n%d é divisor de %d? Não.",counter,num1);
            counter++;
        }
    }
    return 0;
}
