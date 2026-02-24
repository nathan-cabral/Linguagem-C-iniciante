#include<stdio.h>

int main(){

    int a=10;

    printf("Antes do incremento: %d\n",a);
    a++;
    printf("Apos incremento: %d\n",a);
    a--;
    printf("Apos decremento: %d\n",a);
    a+=5;
    printf("Incremento de +5: %d\n",a);
    a-=1;
    printf("Apos decremento de -1: %d\n",a);
    a*=10;
    printf("Apos multipicacao por 10: %d\n",a);

    return 0;
}
