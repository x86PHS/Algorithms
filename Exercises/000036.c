#include<stdio.h>

int main()
{
    // 6.5 - Troco: A máquina não devolve troco, fazendo com que o cliente perca dinheiro.
    
    int cafes, nota, troco;
    
    printf("Digite a quantidade de dinheiro que inseriu na máquina");
    scanf("%d",&nota);
    
    cafes= nota/5;
    troco= nota % 5,0;
    
    printf("Você pediu o equivalente a %d Café(s) e perdeu R$ %d reais de troco.",cafes,troco);
    
    return 0;
}
