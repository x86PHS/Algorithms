/*
https://judge.beecrowd.com/pt/problems/view/1036
*/

#include <math.h>
#include <stdio.h>

void bhaskara(double a,double b, double c){
    if(a == 0 || (pow(b,2) - 4*a*c) < 0 ){
        printf("Impossivel calcular\n");
    }
    else{
        double delta = sqrt(pow(b,2) - 4*a*c);
        double r1 = (-b + delta) / (2*a);
        double r2 = (-b - delta) / (2*a);
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }
}

int main() {
    
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    bhaskara(a,b,c);
}
