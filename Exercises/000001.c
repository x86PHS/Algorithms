#include <stdio.h>

int main() {
    
    int number;
    float salario,bonus,x;
    
    scanf("%d%f%f",&number,&x,&bonus);
    salario = x * bonus;
    printf("NUMBER = %d\n",number);
    printf("SALARY = R$ %.2f",salario);
    
	return 0;
}