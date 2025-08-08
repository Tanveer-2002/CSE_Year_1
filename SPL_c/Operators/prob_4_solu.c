#include<stdio.h>

int main(){
    int x,temp;
    scanf("%d",&x);
    
    temp = x;
    printf("X++: %d\n",temp++);

    temp = x;
    printf("++X: %d\n",++temp);

    temp = x;
    printf("X--: %d\n",temp--);

    temp = x;
    printf("--X: %d\n",--temp);

    return 0;

}