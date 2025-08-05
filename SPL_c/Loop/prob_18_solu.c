#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int newNum = num,renum=0;

    while(num!=0){
        renum *=10;
        renum += num%10;
        num /=10;
    }

    if(newNum == renum){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}