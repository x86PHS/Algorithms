/*
Intervalo 2
https://judge.beecrowd.com/pt/problems/view/1072
*/

#include <stdio.h>
 
int main() {
    
    long int x;
    int cont = 0;
    long int n;
    int in = 0, out = 0;
    scanf("%ld",&n);
    for(long int i = 0; i < n; i++){
        scanf("%ld",&x);
        if(x >= 10 && x <= 20){
            in++;
        }
        else{
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    
    return 0;
}
