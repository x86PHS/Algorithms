#include <stdio.h>
 
void somaimpares(int x, int y){
    int aux;
    if(x > y){
        aux = y;
        y = x;
        x = aux;
    }
    int soma = 0;
    for(int i = x+1; i < y; i++){
        if(i % 2 != 0){
            soma+=i;
        }
    }
    printf("%d\n",soma);
    }
 
int main() {
    
    int x,y;
    scanf("%d%d",&x,&y);
    somaimpares(x,y);
    return 0;
}
