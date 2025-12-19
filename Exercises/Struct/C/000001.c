#include <stdio.h>
#define LengthMax 100

struct clientes{
    char name[LengthMax];https://thehuxley.com/problem/36/code-editor/
    char cpf[LengthMax];
    int idade;
};

void printar(struct clientes c){
    printf("%d %s %s\n",c.idade,c.name,c.cpf);
}

float mediaidade(struct clientes cliente[], int tam){
    int soma = 0;
    for(int i = 0; i <= tam; i++){
        soma = soma + cliente[i].idade;
    }
    int media = soma / tam;
    return media;
}

int main(){
    
    struct clientes c[LengthMax];
    int x;
    printf("Número de clientes:");
    scanf("%d",&x);
    
    for(int i = 0; i != x; i++){
        printf("CLIENTE %d\n",i+1);
        printf("Nome:");
        scanf("%s",&c[i].name);
        printf("Idade:");
        scanf("%d",&c[i].idade);
        printf("CPF:");
        scanf("%s",&c[i].cpf);

        printf("\n");
    }
    printf("%.2f\n",mediaidade(c,x));

    return 0;
}