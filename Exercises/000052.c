int main()
{
    int tabuada, count = 1;
    
    printf("Digite um número que você queira saber a tabuada");
    scanf("%d",&tabuada);
    printf("> TABUADA DO NÚMERO %d <\n",tabuada);
    printf("=========================");
    while(count != 11){
        printf("\n%d x %d = %d",tabuada,count,tabuada*count);
        count++;
    }
    return 0;
}
