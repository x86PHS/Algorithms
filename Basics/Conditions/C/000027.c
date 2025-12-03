#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int x,counter = 0;
    /*4 - Escreva um programa que sorteia 10 números pares entre 1 e 100 e exibe na tela. 
    (como garantir que o sorteio exiba apenas números pares?)*/
    while(counter != 11){
        x = rand() % 101;
        if(x % 2 == 0){
            printf("%d ",x);
        }
        counter++;
    }
	return 0;
}
