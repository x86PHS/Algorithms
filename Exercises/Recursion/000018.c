#include <stdio.h>

int contaDigito(int n, int k){
    if(n == 0){
        return 0;
    }
    int ultimo = n % 10;
    if(ultimo == k){
        return 1 + contaDigito(n / 10,k);
    }
    else{
        return contaDigito(n / 10, k);
    }
}

int main() {
    
    int n,k;
    printf("Digite um número:");
    scanf("%d",&n);
    printf("Digite algum para ocorrência:");
    scanf("%d",&k);
    printf("%d Ocorrência de %d",contaDigito(n,k),k);
}
