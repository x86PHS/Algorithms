/*
https://judge.beecrowd.com/pt/runs/code/47202169
*/

#include <stdio.h>

double media(double x, double y){
    double media = ((x * 3.5) + (y * 7.5)) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n",media);
}

int main() {
    
    double x,y;
    scanf("%lf\n%lf",&x,&y);
    media(x,y);
 
    return 0;
}
