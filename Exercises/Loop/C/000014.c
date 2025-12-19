#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Digite um número:");
    scanf("%d",&num1);
    printf("Digite outro número:");
    scanf("%d",&num2);
    while(num1 != (num2+1)){
        printf("\n%d",num1);
        num1++;
    }
    return 0;
}
