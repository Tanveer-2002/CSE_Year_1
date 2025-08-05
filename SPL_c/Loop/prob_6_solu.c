#include<stdio.h>

int main(){

    int X,N;
    scanf("%d%d",&X,&N);

    for(N; N>=0; N--){

        if(N==0){
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
            printf("Wrong, %d Choice(s) Left!\n",N-1);
        }
    }

    return 0;
}