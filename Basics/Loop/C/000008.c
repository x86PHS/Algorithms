/*
Faça um programa que leia 3 números inteiros e imprima o menor deles.
*/

#include <stdio.h>

int main() {
    
    int numero,menor,x;
    scanf("%d",&menor);
    for(int i = 0; i < 2; i++){
        numero = scanf("%d",&x);
        if(numero < menor){
            menor = numero;
        }
    }
    printf("%d\n",menor);
	return 0;
}
