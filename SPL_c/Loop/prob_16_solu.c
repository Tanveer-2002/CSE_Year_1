#include<stdio.h>

int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);

    int largeNum,smallNum,remainder;
    if(num1>num2){
        largeNum = num1;
        smallNum = num2;
    }
    else{
        largeNum = num2;
        smallNum = num1;
    }

    while(smallNum != 0){
        remainder = largeNum%smallNum;
        
        largeNum = smallNum;
        smallNum = remainder;
    }

    printf("GCD: %d\n",largeNum);
    printf("LCM: %d",(num1*num2/largeNum));
    return 0;
}