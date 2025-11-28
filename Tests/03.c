/*
Correção de prova de AP II
Questão 3
*/

#include <stdio.h>

int multiplica(int v[],int n){
    if(n == 0){
        return v[n];
    }
    return v[n] * multiplica(v,n-1);
}

int main(){
    int v[5] = {1,2,3,4,5};
    printf("%d\n",multiplica(v,4));
}
