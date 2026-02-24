#include<stdio.h>

int main(){

    double p1,p2,p3,p4,media;
    char nome[10];
    int senha;

    printf("SENHA: ");
    scanf("%d",&senha);
    if(senha==1234){
        printf("Bem vindo!\n"\
        "NOME: ");
        scanf("%s",&nome);
        printf("NOTA P1: ");
        scanf("%lf",&p1);
        printf("NOTA P2: ");
        scanf("%lf",&p2);
        printf("NOTA P3: ");
        scanf("%lf",&p3);
        printf("NOTA P4: ");
        scanf("%lf",&p4);
        media=(p1+p2+p3+p4)/4;
        printf("-----------------------\n");
        printf("SITUACAO DO ALUNO: \n"\
        "NOME: %s\n"\
        "MEDIA FINAL: %.2lf\n"\
        ,nome,media);
        if(media>=6.00){
            printf("RESULTADO FINAL: APROVADO\n");
        }else if(media<6.00 && media>=5.00){
            printf("RESULTADO FINAL: RECUPERACAO\n");
        }else{
            printf("RESULTADO FINAL: REPROVADO\n");
        }
    }else{
        printf("SENHA INVALIDA.\n"\
        "REINICIE O PROGRAMA E TENTE NOVAMENTE\n");
    }
    
    return 0;
}
