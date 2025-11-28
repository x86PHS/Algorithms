/*
Correção de prova de AP II
Questão 4
Resp: 13
*/

#include <stdio.h>

int X(int n){
    if(n == 1 || n == 2){
        return n;
    }
    else return X(n-1) + n * X(n-2);
}

int main(){
    printf("%d\n",X(4));
}
