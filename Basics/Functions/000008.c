/*
https://thehuxley.com/problem/293
*/

int maior(int x, int y, int z){
    if(x > y && x > z){
        return x;
    }
    else if(y>z){
        return y;
    }
    else{
        return z;
    }
}

#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d eh o maior\n",maior(x,y,z));
}

