/*
https://thehuxley.com/problem/354
*/

#include <stdio.h>

int parescrescente(int x){
    if(x < 0){
        return 0;
    }
    else{
        parescrescente(x-1);
    }
    if(x % 2 == 0){
        printf("%d\n",x);
    }
}

int main() {
    
    int x;
    scanf("%d\n",&x);
    parescrescente(x);
    return 0;
}
