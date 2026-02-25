#include<stdio.h>
#include<math.h>

int main(){

    double n1,n2,n3,n4,n5;
    double media,produto;

    scanf("%lf %lf %lf %lf %lf",&n1,&n2,&n3,&n4,&n5);
    produto=n1*n2*n3*n4*n5;
    media=pow(produto,1.0/5.0);
    printf("Media: %lf",media);

    return 0;
}