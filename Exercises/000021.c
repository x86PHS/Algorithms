/*
https://judge.beecrowd.com/pt/problems/view/1011
*/

#include <stdio.h>
#define pi 3.14159
 
void volume(double r){
    double volume = (4/3.0) * pi * (r*r*r);
    printf("VOLUME = %.3lf\n",volume);
}
 
int main() {
    double raio;
    scanf("%lf",&raio);
    volume(raio);
}
