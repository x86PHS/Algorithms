/*
https://judge.beecrowd.com/pt/problems/view/1020
*/

#include <stdio.h>

void idadeemdias(int dias){
    int ano = dias / 365;
    int mes = (dias % 365) / 30;
    int dia = dias % 365 % 30;
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);
}

int main() {
    
    int dias;
    scanf("%d",&dias);
    idadeemdias(dias);
    return 0;
}
