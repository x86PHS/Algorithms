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
