#include<stdio.h>

int main(){

    int senha,turma,i;
    char nome[10];
    char *situation,*monitor="FAIL",*class;
    float p[4],tot=0.0,media;

    printf("PASSWORD: ");
    scanf("%d",&senha);
    if(senha==123){
        printf("NAME: ");
        scanf("%s",&nome);
        printf("CHOOSE CLASS: \n");
        printf("[1] ADVANCED [2] BASIC \n");
        scanf("%d",&turma);
        switch(turma){
            case 1:
                class="AVANCED";
                for(i=0;i<4;i++){
                    printf("PUT NOTE: ");
                    scanf("%f",&p[i]);
                    tot=tot+p[i];
                }
                media=tot/i;
                if(media>=7.00){
                    situation="APPROVED";
                    monitor=(media>=8.00)? "YES":"NO";
                }else{
                    situation="FAIL";
                }
                break;
            case 2:
                class="BASIC";
                for(i=0;i<3;i++){
                    printf("PUT NOTE: ");
                    scanf("%f",&p[i]);
                    tot=tot+p[i];    
                }
                media=tot/i;
                if(media>=6.00){
                    situation="APPROVED";
                    monitor="INSUFFICIENT";
                }else{
                    situation="FAIL";
                }
                break;
            default:
                printf("CLASS INVALID\n");
                return 0;
        }
        printf("----STATS----\n"\
        "Name: %s\n"\
        "Class:%s\n"\
        "Final Media: %.2f\n"\
        "Situation: %s\n"\
        "Monitor Accept: %s\n"\
        ,nome,class,media,situation,monitor);
    }else{
        printf("ERROR... TRY AGAIN\n");
    }
    
    return 0;
}
