#include <stdio.h>

int myPow(int x, int y){
    if(y == 1){
        return x;
    }
    return x * myPow(x,y-1);
}

int main(){
    
    int x,y;
    printf("Base:");
    scanf("%d",&x);
    printf("Expoente:");
    scanf("%d",&y);
    printf("%d",myPow(x,y));
    return 0;
}
