#include<stdio.h>

int main(){

    int x,y;
    scanf("%d %d",&x,&y);

    if(x<y){
        for(x; x<=y; x++){
            if(x==y){
                printf("Reached!");
            }
            else{
                printf("%d, ",x*x);
            }
        }
    }
    else if(x>y){
        for(x; x>=y; x--){
            if(x==y){
                printf("Reached!");
            }
            else{
                printf("%d, ",x*x);
            }
        }
    }
    else{
        printf("Reached!");
    }
    return 0;
}