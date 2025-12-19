/*
REVISÃO 4

Escreva um programa que calcule o salário semanal de um trabalhador. As
entradas são o número de horas trabalhadas na semana e o valor da hora. Até
40h/semana não se acrescenta nenhum adicional. Acima de 40h e até 60h há
um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para
essas horas
*/

#include <stdio.h>

void SalarioHomi(int horas, float vHora){
    float salario;
    if(horas <= 40){
        salario = horas * vHora;
    }
    else if(horas > 40 && horas <= 60){
        salario = (vHora * horas) * 0.5 + vHora * horas;
    }
    else{
        salario = (vHora * horas) * 2;
    }
    printf("Salário: R$ %.2f",salario);
}

int main(){
    
    int horas;
    float vHora;
    
    printf("Horas trabalhadas:");
    scanf("%d",&horas);
    printf("Valor hora:");
    scanf("%f",&vHora);
    SalarioHomi(horas,vHora);
}
