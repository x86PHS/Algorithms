/*
https://judge.beecrowd.com/pt/problems/view/1009
*/

#include <stdio.h>
 
void bonus(double salario, double vendas){
    double bonus = salario + vendas * 15/100;
    printf("TOTAL = R$ %.2lf\n",bonus);
}
 
int main() {
    char nome[50];
    double vendas, salario;
    scanf("%s%lf%lf",&nome,&salario,&vendas);
    bonus(salario,vendas);
    return 0;
}
