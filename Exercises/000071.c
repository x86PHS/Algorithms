/*
Tamanho de uma frase
https://www.thehuxley.com/problem/169
*/

#include <stdio.h>

#define max 500

int lengthtotal(char c[]){
    int len = 0;
    for(int i = 0; c[i] != '\n'; i++){
        len++;
    }
    return len;
}

int main() {
    char c[max];
    fgets(c,max, stdin);
    int resultado = lengthtotal(c);
    printf("%d\n",resultado);
	return 0;
}
