#include<stdio.h>

int main(void){

    int a,b,c;

    printf("&a=%p, valor de a=%d\n"\
    "&b=%p, valor de b=%d\n"\
    "&c=%p, valor de c=%d\n\n"\
    ,&a,a,&b,b,&c,c);

    a=10,b=20,c=30;

    printf("&a=%p, valor de a=%d\n"\
    "&b=%p, valor de b=%d\n"\
    "&c=%p, valor de c=%d\n"\
    ,&a,a,&b,b,&c,c);

    return 0;
}
