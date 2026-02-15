#include<stdio.h>

int main(){

    double a[6];
    double total,media;
    int i,positivo=0;

    for(i=0;i<=5;i++){
        scanf("%lf",&a[i]);
        if(a[i]>0){
            positivo++;
            total+=a[i];
        }
    }
    media=total/positivo;
    printf("%d valores positivos\n",positivo);
    printf("%.1lf\n",media);

    return 0;
}
