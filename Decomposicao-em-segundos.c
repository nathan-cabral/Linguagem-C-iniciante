#include<stdio.h>

int main(){

    int di,df,hi,mi,si,hf,mf,sf;
    char textodia[5];

    scanf("%s %d",textodia,&di);
    scanf("%d : %d : %d",&hi,&mi,&si);
    scanf("%s %d",textodia,&df);
    scanf("%d : %d : %d",&hf,&mf,&sf);

    int toti=si 
            +60*mi 
            +3600*hi 
            +86400*di;

    int totf=sf
            +60*mf 
            +3600*hf 
            +86400*df;

    int duracao=totf-toti;

    int W=duracao/86400;
    duracao=duracao%86400;

    int X=duracao/3600;
    duracao=duracao%3600;

    int Y=duracao/60;
    duracao=duracao%60;

    int Z=duracao;

    printf("%d dia(s)\n"\
    "%d hora(s)\n"\
    "%d minuto(s)\n"\
    "%d segundo(s)\n"\
    ,W,X,Y,Z);

    return 0;
}
