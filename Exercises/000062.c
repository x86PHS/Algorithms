/*
https://thehuxley.com/problem/18
Fa?a um programa que leia 3 n?meros inteiros e imprima o menor deles.
*/

#include <stdio.h>

int main() {
    
    int idademenor;
    int n;
    scanf("%d",&n);
    idademenor = n;
    
    for(int i = 0; i<2;i++){
        scanf("%d",&n);
        if(n <= idademenor){
            idademenor = n;
        }
    }
    printf("%d\n",idademenor);
    return 0;
}
