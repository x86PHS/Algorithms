/*
Escreva um programa que calcule o salário semanal de um trabalhador. As
entradas são o número de horas trabalhadas na semana e o valor da hora. Até
40h/semana não se acrescenta nenhum adicional. Acima de 40h e até 60h há
um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para
essas horas.
*/
#include <stdio.h>

float calculosalario(int horas,float valorhoras){
    float salario;
    if(horas <= 60){
        salario = ((horas * valorhoras) * 0.5) + (horas * valorhoras);
    }
    else{
        salario = ((horas * valorhoras) * 1.0) + (horas * valorhoras);
    }
    return salario;
}

int main(){
    int horas;
    float vhoras,salario;
    printf("Horas trabalhadas:");
    scanf("%d",&horas);
    printf("Valor das horas:");
    scanf("%f",&vhoras);
    if(horas < 40){
        salario = horas*vhoras;
        printf("R$ %.2f",salario);
    }
    else{
        salario = calculosalario(horas,vhoras);
        printf("R$ %.2f",salario);
    }
}
