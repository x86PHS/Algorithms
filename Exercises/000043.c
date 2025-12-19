#include <stdio.h>

int main(){
    
    /* Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km)
    e o total de combustível gasto (em litros).*/
    // https://thehuxley.com/problem/294
    
   int km;
   float litro,consumo;
   
   printf("Digite a Distância (Km) total que você percorreu");
   scanf("%d",&km);
   
   printf("\nDigite e o total de Litro (L) colocado no automóvel");
   scanf("%f",&litro);
   
   consumo= km / litro;
   
   printf("\nO consumo médio do seu automóvel foi de: %.3f Km/L",consumo);
}
