#include <stdio.h>

int ContaDigitosPares(int x){
    int resto = 0, k = 0;
    if(x == 0){
        return 0;
    }
    else{
        resto = x % 10;
        x = x / 10;
        k+=ContaDigitosPares(x);
        if(resto % 2 == 0){
        k++;
    }
    }
    return k;
}

int main() {
    int x;
    scanf("%d\n",&x);
    printf("%d\n",ContaDigitosPares(x));
}
