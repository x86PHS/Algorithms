
#include<stdio.h>

int main()
{
    printf("Digite sua idade !!");
    
    int x;
    scanf("%d",&x);
    
    if(x % 2 == 0){
        printf("Sua idade é par !!");
        printf("\nO dobro da sua idade é de: %d",x*2);
        printf("\nA metade da sua idade é de: %d",x/2);
    }
    else{
        printf("Sua idade é impar...");
    }
    return 0;
}