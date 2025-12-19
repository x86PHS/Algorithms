/*
 https://thehuxley.com/problem/351
*/

#include <stdio.h>

int multsoma(int x,int y){
    int somador = 0;
    if(y == 0){
        return 0;
    }
    
    return somador += x + multsoma(x,y-1);}

int main() {
    int x,y;
    scanf("%d\n%d\n",&x,&y);
	printf("%d\n",multsoma(x,y));
	return 0;
}
