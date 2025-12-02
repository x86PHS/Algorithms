/*
Pares entre Cinco Números
https://judge.beecrowd.com/pt/problems/view/1065
*/

#include <stdio.h>
 
int main() {
    
    int cont = 0;
    int n = 0.0;
    for(int i = 0; i < 5; i++){
        scanf("%d",&n);
        if(n % 2 == 0){
            cont++;
        }
    }
    printf("%d valores pares\n",cont);
    
    return 0;
}
