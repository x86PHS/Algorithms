#include <stdio.h>

int main(){
    
    #define MAX 500
    char frase[MAX];
    
    int contador = 0, i = 0, vogais = 0;
    
    printf("DIGITE UMA FRASE");
    fgets(frase,MAX+1,stdin);
    // 500 + 1 Por conta do \0 final
    
    while(frase[i] != '\0'){
        if(frase[i] != '\n'){
            contador++;
            if(frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
                vogais++;
            }
        }
        i++;
    }
    printf("%d\n",contador);
    printf("%d",vogais);
    
    
    
    return 0;
}
