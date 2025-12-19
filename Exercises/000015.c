/*
https://thehuxley.com/problem/43

Faça um programa que leia 3 números inteiros e imprima um (e apenas um) dos seguintes números:
1 (Se todos os números são iguais)
2 (Se todos os números são diferentes)
3 (Se apenas dois números são iguais)
*/

#include <stdio.h>

int comp(int a,int b, int c){
    if(a == b && a == c){
        return 1;
    }
    else if(a != b && b != c && a != c){
        return 2;
    }
    else{
        return 3;
    }
}

int main() {
    
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int resp;
    resp = comp(a,b,c);
    printf("%d",resp);
    
	return 0;
}
