/*
https://thehuxley.com/problem/328
*/
#include <stdio.h>

int main() {
    
    long int a,b;
    scanf("%ld%ld",&a,&b);
    
    if(a == 0 && b == a){
        printf("origem");
    }
    else{
        if(b == 0 && ((a < 0 || a > 0))){
            printf("eixo x");
        }
        else if(a == 0 && (b > 0 || b < 0)){
            printf("eixo y");
        }
        else if(a > 0 && b > 0){
            printf("primeiro");
        }
        else if(a < 0 && b > 0){
            printf("segundo");
        }
        else if(a < 0 && b < 0){
            printf("terceiro");
        }
        else if(a > 0 && b < 0){
            printf("quarto");
        }
    }
    
	return 0;
}
