
#include<stdio.h>

int main(){
    
    float horas;
    
    printf("Digite a hora atual Sem os Minutos !");
    scanf("%f",&horas);
    
    if( horas >= 18 && horas <= 24 || horas >= 0 && horas <= 5){
        printf("No horário atual agora é noite.");
    }
    if( horas > 5 && horas < 12){
        printf("No horário atual agora é dia.");
    }
    if( horas >= 12 && horas < 18){
        printf("O horário atual é de tarde");
    }
    return 0;
 }