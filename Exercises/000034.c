#include<stdio.h>

int main()
{
    // 6.3 - Código Pag 60: Ambrosio, o homem que calculava
    
    float a,b,c;
    
    printf("Digite o primeiro valor para a fórmula:");
    scanf("%f",&a);
    
    printf("Digite o segundo valor para a fórmula:");
    scanf("%f",&b);
    
    printf("Digite o terceiro valor para a fórmula:");
    scanf("%f",&c);
    
    float form1,form2,form3,form4;
    
    // Fórmula 1: (a*b) / c 
    form1= (a*b) / c;
    
    // Fórmula 2: a² + b + 5c
    form2= (a*a) + b + (5*c);
    
    // Fórmula 3: a * b * c + b + c/3 * 5 - 1
    form3= (a*b*c) + b + ((c/3) *5) - 1;
    
    // Fórmula 4: (((a * b * c) * (a * b * c) * (a * b * c))) / 2
    form4= (((a * b * c) * (a * b * c) * (a * b * c))) / 2;
    
    printf("Os Respectivos resultados seguindo as fórmulas de Ambrosio:\n");
    printf("Formula 1: %.3f\n",form1);
    printf("Formula 2: %.3f\n",form2);
    printf("Formula 3: %.3f\n",form3);
    printf("Formula 4: %.3f",form4);
    
    return 0;
}
