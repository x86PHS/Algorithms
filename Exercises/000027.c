/*
https://judge.beecrowd.com/pt/problems/view/1017
*/

#include <stdio.h>

void gastocombustivel(int tempo, int velocidade){
    float distancia = tempo * velocidade;
    double litros = distancia / 12;
    printf("%.3lf\n",litros);
}

int main() {
    
    int tempo,velocidade;
    scanf("%d%d",&tempo,&velocidade);
    gastocombustivel(tempo,velocidade);
    return 0;
}
