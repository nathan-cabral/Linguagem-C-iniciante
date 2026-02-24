#include<stdio.h>

int main(){

    int a[5];
    int i
        ,totpar=0
        ,totimpar=0
        ,totpositivo=0
        ,totnegativo=0;

    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
        if(a[i]>0){
            totpositivo++;
            if(a[i]%2==0){
                totpar++;
            }else{
                totimpar++;
            }
        }else if(a[i]<0){
            totnegativo++;
            if(a[i]%2==0){
                totpar++;
            }else{
                totimpar++;
            }
        }else if(a[i]==0){
            totpar++;
        }
    }

    printf("%d valor(es) par(es)\n"\
    "%d valor(es) impar(es)\n"\
    "%d valor(es) positivo(s)\n"\
    "%d valor(es) negativo(s)\n"\
    ,totpar,totimpar,totpositivo,totnegativo);

    return 0;
}
