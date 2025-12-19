#include<stdio.h>

int main()
{
    // 6.2 - Página 59: Uma cálculadora envolvendo as 4 operações básicas da matemática
    // Adição, Subtração, Divisão e Multiplicação
    
    float x,y;
    
    printf("Digite um número:");
    scanf("%f",&x);
    
    printf("Digite outro número:");
    scanf("%f",&y);
    
    float divisao,subtracao,adicao,multiplicacao;
    
    divisao= x / y;
    multiplicacao= x * y;
    subtracao= x - y;
    adicao= x + y;
    
    printf("\n CÁLCULO REALIZADO COM SUCESSO DAS QUATROS OPERAÇÕES PRINCIPAIS !!\n");
    printf("Adicao: %.3f\n",adicao);
    printf("Divisao: %.3f\n",divisao);
    printf("Subtracao: %.3f\n",subtracao);
    printf("Multiplicacao: %.3f",multiplicacao);
    
    return 0;
}
