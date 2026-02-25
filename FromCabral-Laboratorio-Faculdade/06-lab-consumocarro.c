#include<stdio.h>
#include<math.h>

int main(){

    double dis,lit,consumo;

    scanf("%lf %lf",&dis,&lit);
    consumo=dis/lit;
    printf("Consumo medio= %lf km/l\n",consumo);
    return 0;
}