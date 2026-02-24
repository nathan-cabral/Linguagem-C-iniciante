#include<stdio.h>

int main(){

    int N,i;
    int c=1;

    scanf("%d",&N);

    for(i=0;i<7;i++){
        printf("%d ",c);
        c++;
        printf("%d ",c);
        c++;
        printf("%d PUM\n",c);
        c+=2;
    }

    return 0;
}
