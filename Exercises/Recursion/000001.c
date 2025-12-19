#include <stdio.h>

int fatorial(int n){
    if(n == 0){
        return 1;
    }
    return n * fatorial(n-1);
}

int main() 
{
    int fat;
    printf("Fatorial:");
    scanf("%d",&fat);
    printf("> %d",fatorial(fat));
    return 0;
}
