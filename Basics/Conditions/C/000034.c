#include <stdio.h>

void Ordenador(int *x,int *y, int *z){
    int a = *x;
    int b = *y;
    int c = *z;
    int aux = 0;
    
    if(a > b && a > c){
        aux = a;
        if(b > c){
            *x = c;
            *y = b;
        }
        else{
            *x = b;
            *y = c;
        }
        *z = aux;
    }
    if(b > c && b > a){
        aux = b;
        if(a > c){
            *x = c;
            *y = a;
        }
        else{
            *x = a;
            *y = c;
        }
        *z = aux;
    }
}

int main(){
    
    int x,y,z;

    scanf("%d%d%d",&x,&y,&z);
    
    Ordenador(&x,&y,&z);
    printf("Ordenado: %d %d %d\n",x,y,z);
}
