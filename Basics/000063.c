/*
Equação do Segundo Grau
https://www.thehuxley.com/problem/6
*/

#include <stdio.h>
#include <math.h>

int main() {
    
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    
    if(a == 0){
        printf("NEESG\n");
    }
    else{
        double delta = pow(b,2) - 4*a*c;
        if(delta < 0){
            printf("NRR\n");
        }
        else{
         float r1 = (-b + sqrt(delta)) / (2*a);
         float r2 = (-b - sqrt(delta)) / (2*a);
         printf("%.2f\n",r1);
         printf("%.2f\n",r2);
        }
    }
    
	return 0;
}
