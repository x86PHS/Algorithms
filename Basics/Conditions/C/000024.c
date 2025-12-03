
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    /*5 - Escreva um programa que exibe a soma dos números de 1 a 100*/
    
    int count = 1,num = 1, soma = 0;
    while(count <= 100){
        soma += num;
        num++;
        count++;}
    printf("Soma total: %d",soma);
    return 0;
}
