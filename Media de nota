#include<stdio.h>

int main(){

    int senha,idade,p1,p2,p3;
    double media;
    char nome[10];

    printf("SENHA: ");
    scanf("%d",&senha);
    if(senha==1234){
        printf("Senha Valida\n");
        printf("Nome: ");
        scanf("%s",&nome);
        printf("Idade: ");
        scanf("%d",&idade);
        if(idade>=18){
            printf("MAIOR DE IDADE\n");
            printf("NOTA P1: ");
            scanf("%d",&p1);
            printf("NOTA P2: ");
            scanf("%d",&p2);
            printf("NOTA P3: ");
            scanf("%d",&p3);
            media=(p1+p2+p3)/3;
        }else{
            printf("MENOR DE IDADE\n");
            printf("NOTA UNICA: ");
            scanf("%d",&p1);
            media=p1;
        }
        printf("STATUS FINAL: \n"\
        "NOME: %s\n"\
        ,nome);
        if(media>=7.00){
            printf("APROVADO \n"\
            "MEDIA FINAL: %.2lf\n"\
            ,media);
        }else{
            printf("REPROVADO \n"\
            "MEDIA FINAL: %.2lf\n"\
            ,media);
        }
    }else{
        printf("Senha Invalida\n");
    }

    return 0;
}
