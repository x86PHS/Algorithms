#include <stdio.h>

int paresdecrescentes(int x){
    
    if(x % 2 == 0){
        printf("%d\n",x);
    }
    
    if(x > 0){
        paresdecrescentes(x-1);
    }
    else{
        return 0;
    }

}

int main() {
    
    int x;
    scanf("%d\n",&x);
    paresdecrescentes(x);
    return 0;
}
