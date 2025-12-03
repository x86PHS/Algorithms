/*
Learning Structure
   struct <type id>{
       <field list>;
   }
   */

#include <stdio.h>
#define MAXNOME 500
#define MAXCLIENT 1000
#define MASCULINO 0 

struct client{
    int code;
    char name[500];
    int dayborn;
    int monthborn;
    int yearborn;
    int genre;
};

void imprimir(struct client c)
{
    printf("\n");
    printf("Codigo: %d\n",c.code+1);
    printf("Nome: %s",c.name);
    printf("Nascimento: %d/%d/%d \n",c.dayborn,c.monthborn,c.yearborn);
    printf("Sexo:");
    if(c.genre==MASCULINO){
        printf("Masculino\n");
    }
    else{
        printf("Feminino\n");
    }
}
int main() {
    
    int n;
    struct client c[MAXCLIENT];
    scanf("%d",&n);
    for(int i = 0; i < n; ++i){
        c[i].code = i;
        getchar();
        fgets(c[i].name, MAXNOME, stdin);
        scanf("%d%d%d",&c[i].dayborn,&c[i].monthborn,&c[i].yearborn);
        scanf("%d",&c[i].genre);
    }
    for(int i = 0; i < n; ++i){
        imprimir(c[i]);
    }
    return 0;
}