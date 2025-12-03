int main()
{
    /*4 - Escreva um programa que solicita 10 números e ao final exibe a soma de todos eles.*/
    
    int num,count = 1,soma = 05;
    
    while(count <= 10){
        printf("Escreva um número..");
        scanf("%d",&num);
        soma += num;
        count++;}
    printf("Soma total: %d",soma);
    return 0;
}
