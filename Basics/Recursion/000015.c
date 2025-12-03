#include <stdio.h>

void imprimerecursivo(int array[],int n){
    if(n == 0){
        return;
    }
    imprimerecursivo(array,n-1);
    printf("%d\n",array[n-1]);
}

int main() {
    
    int n,x;
    printf("Quantos números no vetor você vai digitar? ");
    scanf("%d",&n);
    int array[n];
    for(int i = 0; i < n; i++){
        printf("Digite um número:");
        scanf("%d",&x);
        array[i] = x;
    }
    imprimerecursivo(array,n);
}
