/*
Problema "pagamento"
Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa, conforme exemplo. 
*/
#include<stdio.h>

float salario(float a,float b){
    float salariot = a * b;
    return salariot;
}

int main()
{
    float horas,qnthoras;
    
    printf("DIGITE O VALOR POR HORAS");
    scanf("%f",&horas);
    
    printf("DIGITE QUANTIDADE DE HORAS TRABALHADAS");
    scanf("%f",&qnthoras);
    printf("SALARIO DISPONÍVEL: R$ %.2f",salario(horas,qnthoras));
    return 0;
}
