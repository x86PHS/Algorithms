#include<stdio.h>

int main(){
    
    /*
    2 - Solicite 5 números. Exiba os que estão acima da média.
    */
    
    int nums[5], soma = 0,media = 0;
    for(int i = 0,num; i < 5; i++){
        printf("Digite um número:");
        scanf("%d",&num);
        nums[i] = num;
        soma += nums[i];
        }
    media = soma / 5;
    printf("Numeros acima da média\n");
    for(int i = 0; i < 5; i++){
        if(nums[i] > media){
            printf("%d\n",nums[i]);
        }
    }

    return 0;
}
