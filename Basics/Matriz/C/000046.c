#include <stdio.h>


/* 1 - Crie uma matriz 3x3 de números inteiros, associe o valor 9 ao 
    elemento central desta matriz. 
    Exiba a matriz na tela de forma adequada.
 */
int main(){
    
    int matriz[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3;j ++){
        matriz[i][j] = 0;
        if(matriz[i][j] == matriz[1][1]){
            matriz[i][j] = 9;
        }
        printf("%d ",matriz[i][j]);
    }
    printf("\n");
}
    return 0;
}
