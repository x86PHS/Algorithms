#include<stdio.h>

int main()
{
    // 6.6 - Área de um triângulo: Cálcule o valor de um triângulo com os valores repassados
    
    float base, altura;
    
    printf("Digite o valor da base do seu triângulo");
    scanf("%f",&base);
    
    printf("Digite o valor da altura do seu triângulo");
    scanf("%f",&altura);
    
    float area;
    area= (base * altura) / 2;
    
    printf("\nA área do seu triângulo é o equivalente à: %.2f",area);
    
    
    
    return 0;
}
