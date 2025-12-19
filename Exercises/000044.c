#include <stdio.h>

int main(){
    
    int x,y,z,resultado;
    
    printf("- Esse programa irá cálcular a soma dos dois primeiros digitos e a subtração por um terceiro número.\n");
    
    printf("Digite um número: ");
    scanf("%d",&x);
    
    printf("Digite um segundo número: ");
    scanf("%d",&y);
    
    printf("\nA soma entre ambos é de: %d\n",(x+y));
    
    printf("\nDigite um terceiro número: ");
    scanf("%d",&z);
    
    printf("\nO resultado da subtração é de: %d",(x+y)-z);
}
