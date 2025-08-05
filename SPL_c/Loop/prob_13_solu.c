#include<stdio.h>

int main(){

    int N,result=1;
    scanf("%d",&N);

    printf("%d! = ",N);
    for(N; N>=1; N--){
        if(N > 1){
            printf("%d X ",N);
        }
        else{
            printf("%d = ",N);
        }
        result *=N;
        
    }
    printf("%d",result);
    return 0;
}