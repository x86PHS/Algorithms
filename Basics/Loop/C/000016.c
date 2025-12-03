#include <stdio.h>

int fatorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    int fatorialS = 1;
    fatorialS = fatorialS * n * fatorial(n-1);
    return fatorialS;
}

int main(){
    
    int n;
    
    printf("Fatorial: ");
    scanf("%d",&n);
    printf("%d",fatorial(n));
}
