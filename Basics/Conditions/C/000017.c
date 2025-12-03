
#include<stdio.h>

int main(){
    
    float valor;
    
    printf("Digite o seu valor gastado no exterior");
    scanf("%f",&valor);
    
    if(valor <= 500){
        printf("Seu valor não excedeu mais que $ 500 Dolares. Parabéns ! Não tera de pagar impostos.");
    }
    if(valor > 500){
        float excesso,taxa;
        excesso= valor - 500;
        taxa= excesso * 50/100;
        printf("Seu valor foi excedido em $ %.2f Dolares e a taxa a ser paga é de $ %.2f Dolares",excesso,taxa);
    }
    return 0;
 }