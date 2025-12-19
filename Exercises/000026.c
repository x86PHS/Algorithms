/*
https://judge.beecrowd.com/pt/problems/view/1016
*/

#include <stdio.h>

void tempo(int distancia){
    int tempo = distancia * 2;
    printf("%d minutos\n",tempo);
}

int main() {
    
    int distancia;
    scanf("%d",&distancia);
    tempo(distancia);
    return 0;
}
