/*
https://thehuxley.com/problem/285
*/
#include <stdio.h>

int main() {
    long long int x;
    scanf("%lli",&x);
    
    if(x > 0){
        if(x % 2 != 0){
            printf("POSITIVO IMPAR\n");
        }
        else{
            printf("POSITIVO PAR\n");
        }
    }
    else if(x < 0){
        if((x*(-1)) % 2 != 0){
            printf("NEGATIVO IMPAR\n");
        }
        else{
            printf("NEGATIVO PAR\n");
        }}
    else{
        printf("NULO");
    }
	return 0;
}
