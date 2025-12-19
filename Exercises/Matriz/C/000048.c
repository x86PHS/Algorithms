#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* 3 - Crie uma matriz 20 x 20 de inteiros. 
    Preencha com números aleatórios entre 10 e 99. 
    Exiba então a soma dos valores de todas as linhas desta matriz
    e informe qual linha possui o maior valor.*/
int main(){
    
    srand(time(NULL));
    int matriz[20][20];
    int soma[20];
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            matriz[i][j] = rand() % (99 - 10) + 10;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            for(int s = 0; s < 20; s++){
                soma[s] = 0;
                soma[s] += matriz[i][j];
        }
        printf("\n%d ",soma[i]);
    }
}

    return 0;
}
