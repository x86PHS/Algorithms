#include <stdio.h>

void mover(int de, int para){
    printf("%d, %d\n",de,para);
}
void hanoi(int n, int orig, int dest, int aux) {
    if(n == 1) {
        mover(orig, dest);
        return;
    }
    hanoi(n -1, orig, aux, dest);
    mover(orig,dest);
    hanoi(n-1, aux, dest, orig);
}

int main() {
    
    int n = 5;
    hanoi(n,0,2,1);
    return 0;
}
