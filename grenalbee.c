#include<stdio.h>

int main(){

    int vg=0,vi=0,emp=0,morewin=0,resp=1,grenais=0;
    int golg=0,goli=0;

    do{
        grenais++;
        scanf("%d %d",&goli,&golg);
        if(goli>golg){
            vi++;
        }else if(golg>goli){
            vg++;
        }else{
            emp++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&resp);
    }while(resp==1);

    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",vi);
    printf("Gremio:%d\n",vg);
    printf("Empates:%d\n",emp);
    if(vg>vi){
        printf("Gremio venceu mais\n");
    }else if(vi>vg){
        printf("Inter venceu mais\n");
    }else{
        printf("Empate\n");
    }

    

    return 0;
}
