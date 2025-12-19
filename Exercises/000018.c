/*
judge.beecrowd.com/pt/problems/view/1006
*/

#include <stdio.h>

double media(double x,double y,double z){
    double media = ((x * 2) + (y * 3) + (z * 5)) / (2+5+3);
    printf("MEDIA = %.1lf\n",media);
}
 
int main() {
    
    double x,y,z;
    scanf("%lf%lf%lf",&x,&y,&z);
    media(x,y,z);
    return 0;
}
