#include <stdio.h>

int fatorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * fatorial(n-1);
}

int main() {
    
    int n;
    printf("N Fatorial:");
    scanf("%d",&n);
    printf("%d",fatorial(n));
}
