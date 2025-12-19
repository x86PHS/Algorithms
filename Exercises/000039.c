#include<stdio.h>

int main()
{
    // 6.1 - Página 58: Se um minuto tem 60 segundos, quantos segundos existem em X minutos?
    
    int minutos, segundos;
    
    printf("Digite um número significante de minutos:");
    scanf("%d",&minutos);
    
    segundos=minutos*60;
    
    printf("\n %d tem o equivalente a %d segundos.",minutos,segundos);
    return 0;
}
