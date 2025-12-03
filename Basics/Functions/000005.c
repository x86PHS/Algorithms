/*
Problema "consumo"
Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais. 

*/

#include <stdio.h>

float consumo(float a,float b){
    float consumot = a / b;
    return consumot;
    
}

int main(){
    
    float distancia,combustivel;
    
    printf("DISTÂNCIA PERCORRIDA");
    scanf("%f",&distancia);
    
    printf("COMBUSTÍVEL GASTO");
    scanf("%f",&combustivel);
    
    printf("CONSUMO MÉDIO: %.3f",consumo(distancia,combustivel));
    
}
