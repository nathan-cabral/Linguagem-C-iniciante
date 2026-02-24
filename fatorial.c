#include<stdio.h>

int main(){

    int N,i;
    int fatorial=1;

    scanf("%d",&N);

    for(i=N;i>0;i--){
        fatorial=fatorial*i;
    }

    printf("%d\n",fatorial);

    return 0;
}
