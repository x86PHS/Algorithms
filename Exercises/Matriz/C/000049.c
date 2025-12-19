#include<stdio.h>

/*
Problema "diagonal_negativos"
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
*/

int main()
{
    
    int x,num,contN = 0;
    printf("Qual é a ordem da matriz? ");
    scanf("%d",&x);
    
    int matriz[x][x];
    int diagonalP[x-1];
    for(int i = 0; i <= x-1; i++){
        for(int j = 0; j <= x-1; j++){
            printf("Elemento [%d][%d]:",i+1,j+1);
            scanf("%d",&num);
            matriz[i][j] = num;
            if(num < 0){
                ++contN;
            }
            if(matriz[i][j] == matriz[i][i]){
                diagonalP[j] = matriz[i][j];
            }
        }
    }
    for(int i = 0; i <= x-1; i++){
        for(int j = 0; j <= x-1; j++){
            printf(" %2d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("DIAGONAL PRINCIPAL: ");
    for(int j = 0; j <= x-1; j++){
        printf(" %d ",diagonalP[j]);
        }
    printf("\n");
    printf("QUANTIDADE DE NEGATIVOS = %d",contN);
}
