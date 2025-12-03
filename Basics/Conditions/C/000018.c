
#include<stdio.h>


    // Idade  Ambos par
    
/*    int x,y;
    
    printf("Digite a primeira idade");
    scanf("%d",&x);
    
    printf("Digite a segunda idade");
    scanf("%d",&y);
    
    if( x % 2 == 0){
        printf("O casal tem direito a desconto.");
    }
    else{
        printf("O casal não direito a desconto.");
    }
    return 0;*/
    
    // Idade ambos Impar
    
/*int main(){
        
    int x,y;
        
    printf("Digite a primeira idade");
    scanf("%d",&x);
        
    printf("Digite a segunda idade");
    scanf("%d",&y);
    
    if( (x % 2 == 1) || (y % 2 == 1)){
        printf("O casal tem direito a desconto.");
    }
    else{
        printf("O casal não tem direito a desconto.");
    }
    return 0;
}*/

 // Idade Pelo Menos 1 par
 
 int main(){
     
     int x,y;
     
     printf("Escreva a primeira idade");
     scanf("%d",&x);
     
     printf("Escreva a segunda idade");
     scanf("%d",&y);
     
     if( (x % 2 == 0) || (y % 2 == 0)){
         if ( x % 2 == 0 && y % 2 == 0){
             printf("Não tem direito a desconto.");
         }
         else{printf("O casal tem direito a desconto");}
     }
     return 0;
 }