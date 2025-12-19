#include <stdio.h>

int power(int base, int expoente){
    if(expoente == 1){
        return base;
    }
    if(expoente == 0){
        base = 1;
        return base;
    }
    return base * power(base,expoente-1);
}

int main() {
    
    int base, expoente;
    printf("Base:");
    scanf("%d",&base);
    printf("Expoente:");
    scanf("%d",&expoente);
    printf("%d",power(base,expoente));
}
