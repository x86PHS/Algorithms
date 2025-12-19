/*
https://judge.beecrowd.com/pt/problems/view/1018
*/

#include <stdio.h>

void notas(int reais){
    int cem = reais / 100;
    int cinquenta = (reais - cem*100) / 50;
    int vinte = (reais - cem*100 - 50*cinquenta) / 20;
    int dez = (reais - cem*100 - 50*cinquenta - 20*vinte) / 10;
    int cinco = (reais - cem*100 - 50*cinquenta - 20*vinte - 10*dez) / 5;
    int dois = (reais - cem*100 - 50*cinquenta - 20*vinte - 10*dez - 5*cinco) / 2;
    int um = (reais - cem*100 - 50*cinquenta - 20*vinte - 10*dez - 5*cinco - 2*dois) / 1;
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cinquenta);
    printf("%d nota(s) de R$ 20,00\n",vinte);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00\n",um);
}

int main() {
    
    int reais;
    scanf("%d",&reais);
    notas(reais);
    return 0;
}
