#include<stdio.h>
#include<math.h>

int main(){

    double a,b,c,f1,f2,f3,f4;

    scanf("%lf %lf %lf",&a,&b,&c);
    f1=(a*b)/c;
    f2=pow(a,2)+2*3*b-5*c;
    f3=b*2*c-3*b+(c/3.2)*5-4;
    f4=(pow(a*b*c,1.0/3.0))/2.5;
    printf("f1=%lf\n"\
    "f2=%lf\n"\
    "f3=%lf\n"\
    "f4=%lf\n"\
    ,f1,f2,f3,f4);

    return 0;
}