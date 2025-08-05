#include<stdio.h>

int main(){
    int N,sum=0;
    scanf("%d",&N);

    for(int i=1; i<=N; i++){
        sum+= i*i*(i+1);
    }
    
    printf("result: %d",sum);
    return 0;
}