/*
https://judge.beecrowd.com/pt/problems/view/1035
*/

#include <stdio.h>

int valores(int a, int b, int c, int d){
    if(b > c && d > a &&
    (c+d) > (a+b) &&
    c > 0 && d > 0 &&
    a % 2 == 0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
}

int main() {
    
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    valores(a,b,c,d);
}
