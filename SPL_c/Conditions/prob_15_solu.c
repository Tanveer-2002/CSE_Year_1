#include<stdio.h>

int main(){

    int X;
    scanf("%d",&X);

    for(int i=3; i>=0; i--){

        if(i==0){
            printf("Player-1 wins!");
            break;
        }

        int num;
        scanf("%d",&num);

        if(X == num){
            printf("Right, Player-2 wins!");
            break;
        }
        else{
            printf("Wrong, %d Choice(s) Left!\n",i-1);
        }
    }

    return 0;
}