#include<stdio.h>

int main(){

    int num;
    scanf("%d",&num);

    if(num == 0){
        printf("Zero is not a valid input");
    }
    else if(num < 0){
        printf("Negative input is not valid");
    }
    else{
        if (num > 0 && (num & (num - 1)) == 0)
        printf("Yes\n");
    else
        printf("No\n");

    }

    return 0;
}