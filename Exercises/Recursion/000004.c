/*
Fazendo de trás para frente
*/

#include <stdio.h>

int somaN(int v[],int x, int tam){
    int somador = 0;
    if(x == 0){
        return v[x];
    }
    return v[x] + somaN(v,x-1,tam);
}
int main(){
    
    int Vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",somaN(Vetor,10,10));
    return 0;
}
