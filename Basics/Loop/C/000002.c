/*
https://thehuxley.com/problem/24
*/

#include <stdio.h>

int main() {
    
    int n;
    long int k = 1;
    scanf("%d",&n);
    
    while(n >= 0 && n<=12){
        for(int i = 1; i <= n; i++){
            k = i * k;
        }
        printf("%ld\n",k);
        scanf("%d",&n);
        k = 1;
    }
	
	return 0;
}