/*
Ambrósio é amigo da vizinhança e resolveu 
dar descontos para agradar seus clientes. 
A mercearia de Ambrósio contém apenas 04 itens
cujos preços são dados pela tabela abaixo:
A regra de desconto é bem simples: se a 
quantidade de produtos comprados for igual ou maior que quinze, então o desconto é concedido. O desconto também é concedido 
caso o valor total da compra seja maior ou igual a 40 reais.
O valor do desconto é de 15%.
Sua missão é fazer um programa que leia o código do produto, a quantidade comprada e imprima o valor que o cliente deve pagar
já considerando o desconto quando aplicável.
Considere que o cliente só pode comprar um único 
tipo produto cada vez que usar o seu software.
*/

#include <stdio.h>

int main() {
    
    int codigo, qnt;
    double valor,valorUn;
    
    scanf("%d%d",&codigo,&qnt);
    switch(codigo){
        case 1:
            valorUn = 5.3;
            break;
        case 2:
            valorUn = 6;
            break;
        case 3:
            valorUn = 3.2;
            break;
        case 4:
            valorUn = 2.5;
            break;
        break;
    }
    valor = valorUn*qnt;
    if(qnt >= 15 || valor >= 40.00){
        valor = valor - (valor * 0.15);
    }
    
    printf("R$ %.2lf\n",valor);
    
	return 0;
}
