#include <stdio.h>

int main(){
    
    #define MAX 500
    char frase[MAX];
    
    int contador = 0, i = 0, ocorrencia = 0;
    
    printf("DIGITE UMA FRASE");
    fgets(frase,MAX+1,stdin);
    
    while(frase[i] != '\0'){
        if(frase[i] != '\n'){
            contador++;
            }
            i++;
        }

    while(frase[i+1] != frase[0]){
        printf("%c",frase[i]);
        i--;
    }
    return 0;
}
