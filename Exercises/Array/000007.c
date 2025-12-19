#include<stdio.h>

int main(){
    
    /* 1. Crie um vetor de inteiro de 10 posições. Insira o número 5 em todas as posições. */
    
    int nums[10];
    
    printf("VALORES DO VETOR NA POSIÇÃO:\n");
    for(int i = 0; i < 10; i++){
        nums[i] = 5;
        printf("%d - %d\n",i,nums[i]);
    }
    return 0;
}
