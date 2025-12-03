#include<stdio.h>

int main()
{
    int escolha;
    
    printf("BEM VINDO A CORRIDA !!!\n");
    printf("Qual é o seu primeiro passo?");
    scanf("%d",&escolha);
    
    if(escolha != 1 && escolha != 3){
        printf("\nCaminho inválido.");
    }
    else{
        if(escolha == 1){
            printf("\nDigite seu próximo passo.");
            scanf("%d",&escolha);
            if(escolha != 4){
                printf("\nCaminho inválido.");
            }
            else{
                printf("\nDigite seu próximo passo.");
                scanf("%d",&escolha);
                if(escolha != 6){
                    printf("\nCaminho inválido.");
                }
                else{
                    printf("\nParabéns, chegou no destino.");
                }
            }
        }
        else if(escolha == 3){
            printf("\nDigite seu próximo passo.");
            scanf("%d",&escolha);
            if(escolha != 5){
                printf("\nCaminho inválido.");
            }
            else{
                printf("\nDigite seu próximo passo.");
                scanf("%d",&escolha);
                if(escolha != 7){
                    printf("\nCaminho inválido.");
                }
                else{
                    printf("\nDigite seu próximo passo.");
                    scanf("%d",&escolha);
                    if(escolha != 8){
                        printf("\nCaminho inválido.");
                    }
                    else{
                        printf("\nParabéns, chegou no destino.");
                    }
                }
            }
        }
    } /* Primeiro IF e ELSE*/
}
