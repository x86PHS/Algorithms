#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* 5 - Escreva o conteúdo do vetor do exercício anterior na tela, 
    colocando cada valor ao lado do anterior (na mesma linha). ]
    Se o valor do vetor for múltiplo de 10, então insira uma quebra de linha.*/

    
    int v[100];
    srand(time(NULL));
    
    for(int i = 0; i < 100; i++){
        v[i] = rand() % 101;
        if(v[i] % 10 == 0){
            printf("%d\n",v[i]);
        }
        else{
            printf("%d ",v[i]);
        }
    }
    
    return 0;
}
