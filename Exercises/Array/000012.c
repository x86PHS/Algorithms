/*
https://thehuxley.com/problem/57
- Desvio Padrão amostral não específicado pelo exercício
*/

#include <stdio.h>
#include <math.h>

float media(float v[],int cont){
    float somador = 0;
    for(int i = 0; i < cont; i++){
        somador += v[i];
    }
    float media = somador / cont;
    printf("%.2f\n",media);
    return media;
}

void desviopadrao(float media,float v[],int cont){
    float somadorT = 0;
    float desvio;
    for(int i = 0; i < cont; i++){
        somadorT += pow((v[i] - media),2);
    }
    somadorT = somadorT / (cont-1);
    desvio = sqrt(somadorT);
    printf("%.2f\n",desvio);
}

void notasmaiores(float media,float v[],int cont){
    int contador = 0;
    for(int i = 0; i<cont; i++){
        if(v[i] > media){
            contador++;
        }
    }
    printf("%d\n",contador);
}

int main() {
    
    int cont = 0;
    float mediaTotal,n,v[1000];
    for(int i = 0; i <= 1000; i++){
        scanf("%f",&n);
        if(n == -1){
            break;
        }
        else{
        v[i] = n;
        cont++;
        }
    }
    mediaTotal = media(v,cont);
    desviopadrao(mediaTotal,v,cont);
    notasmaiores(mediaTotal,v,cont);
}
