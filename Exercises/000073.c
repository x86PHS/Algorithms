/*
Contar um caracter na string
https://www.thehuxley.com/problem/244
*/

#include <stdio.h>
#define max 50

void contarcaractere(char c[],char caracter[]){
    int contador = 0;
    for(int i = 0; c[i] != '\n'; i++){
        if(c[i] == caracter[0]){
            contador++;
        }
    }
    printf("%d\n",contador);
}

int main() {
    char string[max+1];
    fgets(string,max+1,stdin);
    char caracter[3];
    fgets(caracter,3,stdin);
    
    contarcaractere(string,caracter);
	return 0;
}
