#include<stdio.h>

int main(){

    int X,Y,C;

    scanf("%d\n%d",&X,&Y);
    if(X>Y){
        for(C=Y+1;C<X;C++){
            if(C%5==2 || C%5==3){
                printf("%d\n",C);
            }
        }
    }else{
        for(C=X+1;C<Y;C++){
            if(C%5==2 || C%5==3){
                printf("%d\n",C);
            }
        }
    }

    return 0;
}
