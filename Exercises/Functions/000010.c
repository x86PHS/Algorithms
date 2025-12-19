/*
https://thehuxley.com/problem/401
*/

#include <stdio.h>

int SomaDigitos(int x){
    int acumulador = 0, y;
    while(x > 0){
        y = x % 10;
        acumulador += y;
        x = x/10;
    }
    return acumulador;
    
}
int main() {
    
    int x;
    scanf("%d",&x);
    printf("%d\n", SomaDigitos(x));
    return 0;
}
