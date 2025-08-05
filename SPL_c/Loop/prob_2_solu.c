#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    for(int i=1,j=1 ; i<=num ; i++,j+=2){

        printf("%d, ",j);
    }
    return 0;
}