#include<stdio.h>
#include<math.h>

int main(){

    double a,b;
    double so,su,mu,div;

    scanf("%lf %lf",&a,&b);
    so=a+b;
    su=a-b;
    mu=a*b;
    div=a/b;
    printf("SOMA= %lf\n"\
    "SUBTRACAO= %lf\n"\
    "MULTIPLICACAO= %lf\n"\
    "DIVISAO= %lf\n"\
    ,so,su,mu,div);

    return 0;
}