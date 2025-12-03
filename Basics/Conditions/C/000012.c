
#include<stdio.h>

int main()
{
    
    /*O problema no algoritmo 7.2 trata-se de Operadores Lógicos.*/
    
    int x,y;
    
    printf("Digite a idade 1");
    scanf("%d",&x);
    
    printf("Digite a idade 2");
    scanf("%d",&y);
    
    if( (x % 2 == 0) && (y % 2 == 0) ){
        printf("A idade de ambos é par !! Vocês tem direito a desconto.");
    }
    else{
        printf("Vocês não tem direito a desconto.");
    }
    return 0;
}