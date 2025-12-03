// https://thehuxley.com/problem/356

#include <stdio.h>

void conversaobinario(int n){
    if(n == 1){
        printf("%d\n",n);
        return;
    }
    if(n % 2 != 0){
        conversaobinario(n / 2);
        printf("%d\n",n%2);
    }
    else{
        conversaobinario(n/2);
        printf("%d\n",n%2);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    conversaobinario(n);
}
