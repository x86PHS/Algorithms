/*
https://judge.beecrowd.com/pt/problems/view/1014
*/

#include <stdio.h>

void consumo(int distancia, float combustivel){
    float consumo = distancia / combustivel;
    printf("%.3f km/l\n",consumo);
}

int main() {
    
    int distancia;
    float combustivel;
    
    scanf("%d%f",&distancia,&combustivel);
    consumo(distancia,combustivel);
    
    return 0;
}
