#include <stdio.h>

void bubblesort(int v[],int n){
    int temp;
    int verifica = 0;
	
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(v[j] > v[j+1]){
			    temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
				verifica = 1;
			}
		}
		for(int k = 0; k <= n; k++){
		    printf("%d ",v[k]);
		}
		printf("\n");
		if(verifica == 0){
		    break;
		}
	}
}

int main(){
    
    int v[7] = {6,4,5,1,7,8};
    bubblesort(v,5);
    
    return 0;
}
