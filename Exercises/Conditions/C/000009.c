/*
https://thehuxley.com/problem/19

Faça um programa que leia três notas (valores reais) de um aluno, calcule sua média aritmética e
imprima uma mensagem dizendo se o aluno foi aprovado, reprovado ou deverá fazer prova final. 
O critério de aprovação é o seguinte: 

    Aprovado (média >= 7);
    Reprovado (média < 3);
    Prova final ( 3 <= média < 7).
*/

#include <stdio.h>
int main() {
    
    int soma = 0, x1,x2,x3;
    float media;
    scanf("%d%d%d",&x1,&x2,&x3);
    soma = x1 + x2 + x3;
    media = soma / 3;
    if(media >= 7){
        printf("aprovado\n");}
    else if(media >= 3 && media < 7){
        printf("prova final\n");}
    else if(media < 3){
        printf("reprovado\n");
    }
    
	return 0;
}
