/*
Correção de prova de AP II
Questão 2
*/

#include <stdio.h>

int ordenado(int v[], int n){
    for(int i = 0; i<n; i++){
        if(v[i] > v[i+1]){
            return -1;
            break;
        }
        else{
            return 1;
        }
    }
}

int main(){
    int v[5] = {1,2,3,4,5};
    printf("%d\n",ordenado(v,5));
}
