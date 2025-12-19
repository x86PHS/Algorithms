/*
https://judge.beecrowd.com/pt/problems/view/1010
*/

#include <stdio.h>
 
void pagar(int x2, float x3,int y2, float y3){
    float total = (x2*x3) + (y2*y3);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
}
 
int main() {
    int x1,x2,y1,y2;
    float y3,x3;
    
    scanf("%d%d%f",&x1,&x2,&x3);
    scanf("%d%d%f",&y1,&y2,&y3);
    
    pagar(x2,x3,y2,y3);
    
    return 0;
}
