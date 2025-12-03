/*
REVISÃO 3 

Escreva um programa que receba a velocidade máxima em uma avenida e a
velocidade com que um motorista estava dirigindo nela. Calcule a multa que o
motorista vai receber, considerando que são pagos R$5,00 por cada km/h que
estiver acima da velocidade permitida (considere apenas números inteiros). Se
a velocidade do motorista estiver dentro do limite, o programa deve informar
que não há multa.
*/

#include <stdio.h>

void multa(int velMax, int velMot){
    if(velMot > velMax){
        float multa = (velMot - velMax) * 5;
        printf("Multa: R$ %.2f",multa);
    }
    else{
        printf("Não há multas aplicavéis.");
    }
}

int main() {
    
    int velMax, velMot;
    
    printf("Escreva a Velocidade Máxima da Avenida:");
    scanf("%d",&velMax);
    printf("Escreva a Velcoidade do Motorista:");
    scanf("%d",&velMot);
    
    multa(velMax,velMot);
    
	return 0;
}
