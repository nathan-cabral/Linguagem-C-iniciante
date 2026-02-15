#include<stdio.h>

int main(void){

    int a=1,b=2,c;

    printf("ABAIXO SERA LISTADO OS ENDERECOS DAS VARIAVEIS\n"\
    "=====================================================\n"\
    "Endereco de A (&a): %p\n"\
    "Endereco de B: (&b): %p\n"\
    "Endereco de C: (&c): %p\n\n"\
    ,&a,&b,&c);
    
    printf("ABAIXO SERA LISTADO O VALOR DE CADA VARIAVEL\n"\
    "===================================================\n"\
    "Valor de A: %d\n"\
    "Valor de B: %d\n"\
    "Valor de C: %d\n"\
    ,a,b,c);

    return 0;
}
