#include<stdio.h>
#include<math.h>

int main(){

    double L,H,V;

    scanf("%lf %lf",&L,&H);
    V=pow(L,2.0)*H/3.0;
    printf("Volume = %.2lf metros cubicos\n",V);

    return 0;
}