#include<stdio.h>

int main(){

    int N;
    scanf("%d",&N);

    int ft=1,st=1;
    
    for(int i=1; i<=N; i++){
        if(i==1 || i==2){
            printf("%d, ",1);
        }
        else{
            int temp = st;
            st += ft;
            ft = temp;
            printf("%d, ",st);
        }
    }
    return 0;
}