/*
https://thehuxley.com/problem/72
*/

#include <stdio.h>

void inverteArray(int v[],int n){
    for(int i = n-1; i >= 0; i--){
        printf("%d ",v[i]);
    }
}

int main() {
    
    int n,x;
    scanf("%d",&n);
    int v[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&x); 
        v[i] = x;
    }
    inverteArray(v,n);
}
