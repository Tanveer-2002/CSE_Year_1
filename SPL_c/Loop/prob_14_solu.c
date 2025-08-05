#include<stdio.h>

int main(){

    int n,r,n_r;
    scanf("%d%d",&n,&r);
    n_r = n-r;

    int nfect=1,rfect=1,n_rfect=1;

    for(n; n>=1; n--){
        nfect *=n;
    }
    for(r; r>=1; r--){
        rfect *=r;
    }
    for(n_r; n_r>=1; n_r--){
        n_rfect *=n_r;
    }

    int result = nfect/(rfect*n_rfect);

    printf("%d",result);
    return 0;
}