#include<stdio.h>

int main(){

    int cont=0;
    float n,soma=0,media;

    while(cont<2){
        scanf("%f",&n);
        if(n>=0 && n<=10){
            cont++;
            soma=soma+n;
        }else{
            printf("nota invalida\n");
        }
    }
    media=soma/2;
    printf("media = %.2f\n",media);


    return 0;
}
