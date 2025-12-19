/*
https://judge.beecrowd.com/pt/problems/view/1013
*/

#include <stdio.h>
#include <stdlib.h>

void maior(int a,int b,int c){
    int maiorAB = (a+b+abs(a-b))/2;
    int maiorABC = (maiorAB + c + abs(maiorAB-c))/2;
    
    printf("%d eh o maior\n",maiorABC);
}

int main() {
    
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    maior(a,b,c);
    return 0;
}
