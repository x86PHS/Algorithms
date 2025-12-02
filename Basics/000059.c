/*
Números Positivos
https://judge.beecrowd.com/pt/problems/view/1060
*/

#include <stdio.h>
 
int main() {
    
    int cont = 0;
    for(int i = 0; i < 6; i++){
        float n;
        scanf("%f",&n);
        if(n > 0){
            cont++;
        }
    }
    printf("%d valores positivos\n",cont);

    return 0;
}
