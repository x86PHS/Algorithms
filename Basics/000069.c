#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

    /*6 - Crie uma função que declara e preenche um vetor de 5 números aleatórios. 
    A função deve exibir o vetor na tela e retornar TRUE caso este vetor esteja em ordem crescente. 
    No seu programa, chame esta função até ela retornar True.*/

bool Preenche(){
    srand(time(NULL));
    int vet[5];
    for(int i = 0; i < 5; i++){
        vet[i] = rand() % 101;
    }
    if(vet[0] < vet[1] && vet[1] < vet[2] && vet[2] < vet[3] && vet[3] < vet[4] && vet[4] < vet[5]){
        return true;
    }
    else{
    return true;}
}


int main()
{

    printf("%d",Preenche());
    
    return 0;
}
