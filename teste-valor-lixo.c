#include<stdio.h>

int main(void){

    int a,b,c=1;

    printf("Lixo de A: %d\n"\
    "Lixo de B: %d\n"\
    "Valor de C: %d\n"\
    ,a,b,c);

    printf("Insira um novo valor para A e B: ");
    scanf("%d %d",&a,&b);
    printf("Novo valor de A: %d\n"\
    "Novo valor de B: %d\n"\
    ,a,b);

    return 0;
}
