#include<stdio.h>

int main(){
    int X,Y,temp;
    scanf("%d%d",&X,&Y);

    temp = X;
    temp +=Y;
    printf("Incremented Value: %d\n",temp);

    temp = X;
    temp -=Y;
    printf("Decremented Value: %d\n",temp);
    
    return 0;

}