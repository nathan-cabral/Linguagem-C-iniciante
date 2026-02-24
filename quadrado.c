#include<stdio.h>

int main(){

    int N,c,quadrado;

    scanf("%d",&N);


    for(c=2;c<=N;c+=2){
        quadrado=c*c;
        printf("%d^2 = %d\n",c,quadrado);
    }

    return 0;
}
