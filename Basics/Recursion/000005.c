#include <stdio.h>

int procurar(int vetor[], int tam, int indice, int num){
    if(vetor[indice] == num){
        return indice;
    }
    return procurar(vetor, tam, indice+1,num);
}
int main(){
    
    int num;
    int Vetor[10] = {10,1,3,5,4,9,7,8,6,2};
    printf("De 0 a 10, qual valor você quer saber a posição? ");
    scanf("%d",&num);
    printf("%d",procurar(Vetor,10,0,num)+1);
    return 0;
}
