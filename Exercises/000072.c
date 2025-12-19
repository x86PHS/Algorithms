/*
Seja Bem Vindo!
https://www.thehuxley.com/problem/15
*/

#include <stdio.h>
#define max 120

int main() {
    
    char c[max+1];
    fgets(c,max+1,stdin);
    printf("Seja muito bem-vindo %s\n",c);
    
	return 0;
}
