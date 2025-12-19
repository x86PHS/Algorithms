/*
https://thehuxley.com/problem/400
*/

#include <stdio.h>

float CalculaMulta(int x) { 
    float multa = 0;
    if(x > 50 && x <= 55){
        multa = 230;
        return multa;
    }
    else if(x > 55 && x <= 60){
        multa = 340;
        return multa;
    }
    else if(x > 60){
        multa = (x - 50) * 19.28;
        return multa;
    }
    return multa;
}

int main() {
    
    int x;
    scanf("%d",&x);
    printf("%.2f\n", CalculaMulta(x));
    return 0;
}
