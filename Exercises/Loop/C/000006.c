#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool P3025(int x){
    int divisao = x/100; //Ex: 3025 / 100 = 30
    int resto = x%100; //Ex: 3025 % 100 = 25
    int prop = divisao * 100 + resto;
    int elev = (divisao + resto) * (divisao + resto);
    if(prop == elev){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int x;
    scanf("%d",&x);
    while(x>=1000 && x<=9999){
       if(P3025(x) == 1){
           printf("propriedade do 3025!\n");
       } 
       else{
           printf("numero comum\n");
       }
       scanf("%d",&x);
    }
}
