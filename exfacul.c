#include<stdio.h>

int main(){

    int N,u,d,m,c;

    scanf("%d",&N);
    u=N%10;
    d=(N/10)%10;
    c=(N/100)%100;
    m=(N/1000)%1000;

    printf("Numero=%d\n",N);

    printf("U=%d D=%d C=%d M=%d",u,d,c,m);

    return 0;
}
