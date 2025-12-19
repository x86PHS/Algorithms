#include <stdio.h>

// https://judge.beecrowd.com/pt/problems/view/1050
 
void dd(int n){
    switch(n){
        case 11:
            printf("Sao Paulo\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 27:
            printf("Vitoria\n");
            break;
        case 31:
            printf("Belo Horizonte\n");
            break;
        case 32:
            printf("Juiz de Fora\n");
            break;
        case 61:
            printf("Brasilia\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        default:
            printf("DDD nao cadastrado\n");
            break;
    }
}

int main() {
 
    int n;
    scanf("%d",&n);
    dd(n);
    return 0;
}
