int main()
{
    /*2 - Escreva um programa que exibe o quadrado de todos os números de 1 a 20.
    Ex: 1 - 1 2 - 4 3 - 9 4 - 16 ... 20 - 400*/
    
    int quadrado = 1,count = 1;
    
    while(count <= 20){
        printf("%d ..",quadrado*quadrado);
        quadrado++;
        count++;
    }
    return 0;
}
