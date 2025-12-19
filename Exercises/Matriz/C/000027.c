#include <stdio.h>

int main(){
    
    #define MAX 500
    char frase[MAX];
    
    int contador = 0, i = 0, ocorrencia = 0;
    
    printf("DIGITE UMA FRASE");
    fgets(frase,MAX+1,stdin);
    // 500 + 1 Por conta do \0 final
    
    while(frase[i] != '\0'){
        if(frase[i] != '\n'){
            if(frase[i] == 'a' || frase[i] == 'A'){
                ocorrencia++;
            }
            contador++;
        }
        i++;
    }
    printf("%d\n",contador);
    printf("OCORRENCIA DE A: %d",ocorrencia);
    
    return 0;
}
