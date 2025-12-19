/*
https://judge.beecrowd.com/pt/problems/view/1037
*/

#include <stdio.h>

void media(float n1,float n2,float n3,float n4){
    float media = (n1*2 + n2*3 + n3*4 + n4*1) / (2+3+4+1);
    float exame;
    
    printf("Media: %.1f\n",media);
    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    if(media < 5.0){
        printf("Aluno reprovado.\n");
    }
    if(media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        printf("Nota do exame:");
        scanf("%f",&exame);
        media = (exame + media) / 2;
        if(media >= 5.0){
            printf("\nAluno aprovado.\n");
        }
        else{
            printf("\nAluno reprovado.\n");
        }
        printf("Media final: %.1f\n",media);
    }
}

int main() {
    float n1,n2,n3,n4;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    media(n1,n2,n3,n4);
}
