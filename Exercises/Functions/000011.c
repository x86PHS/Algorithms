/*
https://thehuxley.com/problem/404 
*/

#include <stdio.h>

void ClassificaAluno(float x, int y){
    if(x >= 9.5 && y <= 10){
        printf("APROVADO COM LOUVOR");
    }
    else if(x >= 7.0 && y <= 10){
        printf("APROVADO");
    }
    else if(x < 7.0){
        printf("REPROVADO");
    }
    else{
        printf("REPROVADO POR FALTAS");
    }
}
int main() {
    
    float x; 
    int y;
    scanf("%f %d",&x,&y);
    ClassificaAluno(x,y);
}
