#include<stdio.h>

int main(){

    int i=1;

    while(1){
        char x;
        scanf(" %c",&x);
        
        if(x=='A'){
            break;
        }
        else{
            printf("Input %d: %c\n",i,x);
            i++;
        }
    }
    return 0;
}