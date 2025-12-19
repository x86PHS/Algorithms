/*
As duas strings são iguais?
https://www.thehuxley.com/problem/253
*/

#include <stdio.h>
#include <string.h>

#define max 50

void compara(char string1[],char string2[]){
    if(strcmp(string1,string2) == 0){
        printf("IGUAIS\n");
    }
    else{
        printf("DIFERENTES\n");
    }
}

int main() {
    char string1[max+1];
    fgets(string1,max+1,stdin);
    char string2[max+1];
    fgets(string2,max+1,stdin);
    
    compara(string1,string2);
	return 0;
}
