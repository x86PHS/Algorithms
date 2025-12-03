/*
https://thehuxley.com/problem/23
*/

#include <stdio.h>

int multiplos(int x,int y){
    int contador = 0;
    for(int i = x; i<=y;i++){
        if(i % 5 == 0){
            if(contador == 0){
                printf("%d",i);}
            else{
                printf("|");
                printf("%d",i);
            }
            contador++;
        }
        
    }
}

int main(){

    int x,y;
    scanf("%d %d",&x,&y);
    multiplos(x,y);
}
