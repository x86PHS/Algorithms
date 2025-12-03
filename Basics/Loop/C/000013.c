#include<stdio.h>

int main()
{
    int counter=1;
    while(counter != 21){
        if(counter % 2 != 0){
            printf("%d\n",counter);
        }
        counter++;
    }
    return 0;
}
