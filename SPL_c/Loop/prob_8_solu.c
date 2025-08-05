#include<stdio.h>

int main(){
    int num,renum=0;
    scanf("%d",&num);

    while(num!=0){
        renum *=10;
        renum += num%10;
        num /=10;
    }

    printf("%d",renum);
    return 0;
}