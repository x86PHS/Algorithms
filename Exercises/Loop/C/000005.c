#include <stdio.h>

int main() {
    
    int x;
    scanf("%d",&x);
    
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= i*2-1; j++){
            printf("*");
        }
        printf("\n");
    }
	return 0;
}