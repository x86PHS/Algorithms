
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    /* Quando declaramos uma variável, ela basicamente assume um valor não declarado, após isso, quando a
    gente atribui um valor a ela, ela recebe esse valor e assim ela continua com esse valor até ser alterado.
    Ou seja, vamos "demonstrar" escrevendo um código abaixo e comentando enquanto isso.*/
    
    int x;
    // X não tem um valor definido
    
    x = 5;
    printf("%d\n",x);
    // X assume o valor 5 aqui
    
    x = x + 5;
    // Aqui ele vai assumir consigo o valor 5 + 5(x) = 10 -> x
    printf("%d\n",x);
    
    x = x + 10;
    // Aqui ele vai realizar mais uma soma atribuindo 10 ao 10 que anteriormente foi assumido. 10 + 10 = 20
    printf("%d\n",x);
}
