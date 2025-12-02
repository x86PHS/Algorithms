/*
Seis Números Ímpares
https://judge.beecrowd.com/pt/problems/view/1070
*/

#include <stdio.h>
 
int main() {
    
    int x,cont = 0;
    scanf("%d",&x);
    for(int i = 1; i >= 0;i++){
        if(x % 2 != 0){
            printf("%d\n",x);
            cont++;
        }
        x++;
        if(cont == 6){
            break;
        }
    }

    return 0;
}
