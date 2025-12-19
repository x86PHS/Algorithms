/*Problema "terreno"
Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais, conforme exemplo. 
*/

#include <stdio.h>

float area(float largura,float comprimento){
    float areat = largura * comprimento;
    return areat;
}

float preco(float area, float mquadrado){
    float precot = area * mquadrado;
    return precot;
}

int main(){
    
    float largura,comprimento,mquadrado;
    float areap, precop;
    
    printf("Digite a largura do terreno");
    scanf("%f",&largura);
    printf("Digite o comprimento do terreno");
    scanf("%f",&comprimento);
    printf("Digite o valor do metro quadrado");
    scanf("%f",&mquadrado);
    
    areap = area(largura,comprimento);
    precop = preco(areap,mquadrado);
    printf("Area do terreno: %.2f\n",areap);
    printf("Preco do terreno: %.2f",precop);
    
    return 0;
}
