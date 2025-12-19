#include <stdio.h>

void collatz(int n){
    printf("%d ",n);
    if(n == 1){
        return;
    }
    if(n % 2 == 0){
        collatz(n/2);
    }
    else{
        collatz(3*n+1);
    }
}

int main(){
    
    collatz(15);
}
