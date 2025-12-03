/*
https://thehuxley.com/problem/289
*/

#include <stdio.h>

int main() {
    
    int f,i,count = 0;
    scanf("%d%d",&f,&i);
    if(f >= 170 || i >= 16){
        count = count + 1;
    }
    if(f >= 140 && i >= 14){
        count = count + 1;
    }
    if(f >= 150 && i >= 12){
        count = count + 1;
    }
    printf("%d",count);
}
