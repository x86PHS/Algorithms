/*
https://thehuxley.com/problem/234
*/

#include <stdio.h>

int main() {
    
    int x, y;
    int aux;
    scanf("%d%d",&x,&y);
    
    if(x > y){
        aux = y;
        y = x;
        x = aux;
    }
    for(int i = x; i<y; i++){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d\n",i);
        }}
	return 0;
}