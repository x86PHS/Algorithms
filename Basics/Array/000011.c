/*
https://thehuxley.com/problem/55
*/

#include <stdio.h>

int ContaNums(int v[],int x){
    int cont = 0;
    for(int i = 0; i<10; i++){
        if(v[i] == x){
            cont++;
        }
    }
    printf("O numero %d apareceu %d vezes",x,cont);
}

int main() {
    
    int v[10];
    int x,y;
    for(int i = 0; i<10; i++){
        scanf("%d",&y);
        v[i] = y;
        if(i == 9){
            x = v[i];
        }
    }
    ContaNums(v,x);
}
