/*
Escreva um programa que receba a velocidade máxima 
em uma avenida e a
velocidade com que um motorista estava dirigindo nela. 
Calcule a multa que o
motorista vai receber, considerando que são pagos 
R$5,00 por cada km/h que
estiver acima da velocidade permitida 
(considere apenas números inteiros). Se
a velocidade do motorista estiver dentro do limite, 
o programa deve informar
que não há multa
*/

#include <stdio.h>

float multa(int x,int y){
    float multamaxima = (y - x) * 5;
    return multamaxima;
}

int main(){
    int velocidadepermitida,velocidademotorista;
    printf("Velocidade Permitida:");
    scanf("%d",&velocidadepermitida);
    printf("Velocidade do Motorista:");
    scanf("%d",&velocidademotorista);
    if(velocidademotorista > velocidadepermitida){
        printf("R$ %.2f de Multa.",multa(velocidadepermitida,velocidademotorista));
    }
    else{
        printf("Não há multa.");
    }
}
