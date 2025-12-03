/*
https://thehuxley.com/problem/167
*/

include <stdio.h>

int main() {
    
    int x = 0,y = 0,b = 0,n,nulo = 0,vencedor;
    float somavotos;
    scanf("%d",&n);
    
    while(n!=-1){
        switch(n){
            case 83:
                x+=1;
                break;
            case 93:
                y+=1;
                break;
            case 0:
                b+=1;
                break;
            default:
                nulo+=1;
                break;
        }
        scanf("%d",&n);
        if(x > y){
            vencedor = 83;}
        else{
            vencedor = 93;}
    }
    somavotos = x+y+b;
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",b);
    printf("%d\n",nulo);
    printf("%d\n",vencedor);
    printf("%.2f\n",(x/somavotos)*100);
    printf("%.2f\n",(y/somavotos)*100);
    
	return 0;
}