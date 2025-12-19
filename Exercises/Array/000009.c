#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    /*
    3 -Crie um vetor de 100 posições, preencha com números aleatórios de 1 a 100. Exiba a média destes.
    */
    
    int nums[100], soma = 0,media = 0;
    for(int i = 0,num; i < 100; i++){
        num = rand() % 101;
        nums[i] = num;
        soma += nums[i];
        }
    printf("%d\n",soma);
    media = soma / 100;
    printf("Numeros acima da média - %d\n",media);
    for(int i = 0; i < 100; i++){
        if(nums[i] > media){
            printf("%d ",nums[i]);
        }
    }

    return 0;
}
