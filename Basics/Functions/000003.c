/*
Problema "circulo"
Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟
ଶ
. Você pode
usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
diretamente o valor 3.14159. 

*/
#include<stdio.h>

float area(float a){
    float areat = (a * a) * 3.14159;
    return areat;
}

int main()
{
    float raio;
    
    printf("DIGITE O VALOR DO RAIO");
    scanf("%f",&raio);
    printf("AREA: %.3f",area(raio));
    
    return 0;
}
