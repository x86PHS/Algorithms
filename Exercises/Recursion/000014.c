#include <stdio.h>

int SequenciaCollatz(int n){
    printf("%d\n",n);
    if(n == 1){
        return 0;
    }
    if(n % 2 == 0){
        SequenciaCollatz(n/2);
    }
    if(n % 2 != 0){
    SequenciaCollatz(n * 3 + 1);}
}

int main() {
    int n;
    scanf("%d",&n);
    SequenciaCollatz(n);
}
