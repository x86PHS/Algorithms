/*
Problema "troco"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente. 
*/

#include <stdio.h>

float troco(float precoun, float dinheiror, float qnt){
    float prod = qnt - (precoun * dinheiror);
    return prod;
}

int main(){
    
    float precoun,dinheror,qnt;
    
    printf("Preço unitário do produto");
    scanf("%f",&precoun);
    printf("Quantidade comprada");
    scanf("%f",&dinheror);
    printf("Dinheiro recebido");
    scanf("%f",&qnt);
    
    printf("TROCO: %.2f",troco(precoun,dinheror,qnt));
    
    return 0;
}
