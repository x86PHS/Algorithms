#include<stdio.h>

int main()
{
    // 6.4 - IMC PAG 62: O Exercício proposto é de realizar uma calculadora IMC que é feita por Massa:Altura²
    
    float altura,massa,imc;
    
    printf("Digite sua Altura");
    scanf("%f",&altura);
    
    printf("Digite sua Massa Corporea (KG)");
    scanf("%f",&massa);
    
    imc= massa / (altura * altura);
    
    printf("Seu indíce de massa corporea é aproximadamente de: %.2f",imc);
    return 0;
}
