#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 4 - Crie e preencha o mesmo vetor de 100 números. 
    // Calcule a soma de todos que são menores que a média dos 10 últimos.
    
    int v[100];
    int soma = 0, media = 0;
    int soma2 = 0;
    srand(time(NULL));
    
    for(int i = 0; i < 100; i++){
        v[i] = rand() % 101;
    }
    for(int i = 90; i < 99; i++){
        soma += v[i];  
        printf("%d ",v[i]);
    }
    
    media = soma / 10;
    for(int i = 0; i < 100; i++ ){
        if(media > v[i]){
            soma2 = v[i];
        }
    }
    printf("\nMédia: %d\n",media);
    printf("Soma: %d",soma);
    
    return 0;
}
