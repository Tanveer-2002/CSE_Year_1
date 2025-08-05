#include<stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    
    int result = 1;
    if(y==0){
        printf("%d",1);
        return 0;
    }
    else{
        for(int i=1; i<=y; i++){
            result *=x;
        }

    }
    printf("%d",result);
    return 0;
}