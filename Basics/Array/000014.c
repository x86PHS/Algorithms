/*
https://thehuxley.com/problem/74
*/

#include <stdio.h>

void posicoes(int v[],int y){
    for(int i = 0; i < 100; i++){
        if(v[i] == y){
            printf("%d\n",i);
        }
    }
}

int main() {
    int v[101];
    int x,y;
    for(int i = 0; i<101;i++){
        scanf("%d",&x);
        v[i] = x;
        if(i == 101-1){
            y = v[i];
        }
    }
    posicoes(v,y);
}
