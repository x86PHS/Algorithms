#include <stdio.h>

int fibonnaci(int x){
    if(x == 0){
        return 0;
    }
    if(x == 1){
        return 1;
    }
    return fibonnaci(x-1) + fibonnaci(x-2);
}

int main(){
    int x;
    printf("Enésimo termo Fibo:");
    scanf("%d",&x);
    printf("%d",fibonnaci(x));
    return 0;
}
