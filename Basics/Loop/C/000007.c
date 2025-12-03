#include <stdio.h>

int invertido(int x,int y){
    for(int i = x; i<=y;i++){
        int resto = i/10;
        if(i % 10 != 0 && i % resto == 0){
            printf("%d\n",i);
        }
    }
}

int main(){

    int x,y;
    scanf("%d %d",&x,&y);
    invertido(x,y);
}
