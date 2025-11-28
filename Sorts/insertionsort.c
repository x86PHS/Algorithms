#include <stdio.h>

void insertionSort(int v[],int n){
	int chave, j;
	for(int i = 1; i<n; i++){
		chave = v[i];
		j = i-1; // J = 0 and I = 1
		while(j >= 0 && v[j] > chave){
			v[j+1] = v[j];
			j = j - 1;
		}
		for(int k = 0; k <= n; k++){
		    printf("%d ",v[k]);
		}
		printf("\n");
		v[j+1] = chave;
	}
}
int main(){
    
    int v[7] = {8,7,6,4,12,2,10};
    insertionSort(v,6);
    
    return 0;
}
