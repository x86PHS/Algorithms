#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* 2 - Crie uma matriz 10x10. Atribua o número 8 a todos os elementos da matriz. 
    Atribua então o número 0 a um elemento randômico da matriz. Exiba a matriz na tela. */
int main(){
    
    int matriz[10][10];
    srand(time(NULL));
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            matriz[i][j] = 8;
        }
    }
        int RandL = rand() % 10;
        int RandC = rand() % 10;
        matriz[RandL][RandC] = 1;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
        printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
