/*
Positivos e Média
https://judge.beecrowd.com/pt/problems/view/1064
*/

#include <stdio.h>
 
int main() {
    
    int cont = 0;
    float soma = 0,media = 0;
    
    for(int i = 0; i < 6; i++){
        float n;
        scanf("%f",&n);
        if(n > 0){
            soma += n;
            cont++;
        }
    }
    media = soma / cont;
    printf("%d valores positivos\n",cont);
    printf("%.1f\n",media);
    
    
 
    return 0;
}
