
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    /* 4 - Escrever um algoritmo que leia três valores inteiros e verifique 
    se eles podem ser as medidas dos lados de um triângulo.
    Propriedade: o comprimento de cada lado de um triângulo é menor 
    do que a soma dos comprimentos dos outros dois lados.*/
    
    int a,b,c;
    
    printf("Digite o valor de um segmento de reta");
    scanf("%d",&a);
    
    printf("Digite o valor de um outro segmento de reta");
    scanf("%d",&b);
    
    printf("Digite o valor do terceiro segmento de reta");
    scanf("%d",&c);
    
    if(a+b > c || a + c > b || c + b > a){
        printf("\nCom os números digitados é possível criar um triângulo.");
    }
    else{
        printf("\nCom os números digitados não é possível criar um triângulo...");
    }

    return 0;
}
