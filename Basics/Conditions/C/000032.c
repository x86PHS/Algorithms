
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    /* 5 - Incremente o exercício anterior, para o caso das medidas 
    formarem um triângulo válido, informar qual o tipo de triângulo 
    que eles formam: equilátero, isósceles ou escaleno.*/
    
    int a,b,c;
    
    printf("Digite o valor de um segmento de reta");
    scanf("%d",&a);
    
    printf("Digite o valor de um outro segmento de reta");
    scanf("%d",&b);
    
    printf("Digite o valor do terceiro segmento de reta");
    scanf("%d",&c);
    
    if(a+b > c || a + c > b || c + b > a){
        printf("Com os valores digitados é possível criar um triângulo.\n");
        if(a == b && a == c && b == c){
            printf("Com os valores digitados, é possível montar um triângulo equilátero");}
        else{
            if(a == b || a == c || b == c){
            printf("Com os valores digitados, é possível montar um triângulo isóceles");}}
            else{
                if(a != b && a != c && b != c){
                printf("Com os valores digitados, é possivel montar um triângulo escaleno");}}
        if(a > b && a > c){
            int lmenor,lmaior;
            lmaior=a*a;
            lmenor=(b*b) + (c*c);
            if(lmaior == lmenor){
                printf("É possível fazer um triângulo retângulo com esses valores.");}}
        if(c > b && c > a){
            int lmenor, lmaior;
            lmaior=c*c;
            lmenor=(a*a) + (b*b);
            if(lmaior == lmenor){
                printf("É possível fazer um triângulo retângulo com esses valores.");}}
        if(b > a && b > c){
            int lmaior, lmenor;
            lmaior=b*b;
            lmenor=(a*a) + (c*c);
            if(lmaior == lmenor){
                printf("É possível fazer um triângulo retângulo com esses valores.");}}
}
    else(){
        printf("\nCom os números digitados não é possível criar um triângulo...");
    }
    return 0;
}