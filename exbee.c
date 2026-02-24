#include<stdio.h>

int main(){

    int N;
    int i,i2,i3;

    scanf("%d",&N);

    for(i=1;i<=N;i++){
        i2=i*i;
        i3=i*i*i;
        printf("%d %d %d\n",i,i2,i3);
    }

    return 0;
}
