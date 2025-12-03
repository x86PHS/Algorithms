#include <stdio.h>

int torre(int x){
    if(x == 1){
        return 1;
    }
    if(x >= 2){
    return x + torre(x-1);}
}
int main(){
    
    int x;
    printf("Base da torre:");
    scanf("%d",&x);
    printf("%d",torre(x));
    return 0;
}
