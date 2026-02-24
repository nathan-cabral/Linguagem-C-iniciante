#include<stdio.h>

int main(){

    int N,i,r;

    scanf("%d",&N);

    for(i=1;i<=10;i++){
        r=N*i;
        printf("%d x %d = %d\n",i,N,r);
    }

    return 0;
}
