#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    printf("a) %d\n",(a+b)<=80 && b>=0);
    printf("b) %d\n",(a-b) == 0 || c != 0);
    printf("c) %d\n", a!=b || (b<a) && c>0);

    return 0;
}