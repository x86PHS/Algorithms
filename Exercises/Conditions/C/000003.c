/*
https://thehuxley.com/problem/288
*/

#include <stdio.h>

int main() {
    
    int x1,x2,y1,y2,z;
    
    scanf("%d%d%d%d%d",&x1,&x2,&y1,&y2,&z);
    
    if((y1 == 1 && y2 == y1) && (x1 == 1 || x2 == 1) && (z == 1)){
        printf("AVALIADO\n");
    }
    else{
        printf("0\n");
    }
	return 0;
}
