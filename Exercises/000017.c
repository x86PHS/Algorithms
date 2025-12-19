/*
https://judge.beecrowd.com/pt/runs/code/47202186
*/

#include <stdio.h>
#define pi 3.14159

double areacirculo(double x){
    double area = pi * (x*x);
    printf("A=%.4lf\n",area);
}

int main() {
    
    double x;
    scanf("%lf",&x);
    areacirculo(x);
 
    return 0;
}

