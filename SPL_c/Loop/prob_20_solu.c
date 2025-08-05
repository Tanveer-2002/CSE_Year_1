#include<stdio.h>

int main(){
    int N,result = 0,temp =0;
    scanf("%d",&N);

    for(int i =1; i<=N; i++){
        temp *=10;
        temp +=i;
        result +=temp;
    }

    printf("%d",result);
    return 0;

}