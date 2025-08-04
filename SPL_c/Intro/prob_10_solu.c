#include<stdio.h>
int main(){

    long int li;
    long long int lli;
    long double ld;
    short int si;

    li = 2147483647;
    lli = 9223372036854775807;
    ld = 1.1E+4932L;
    si =  32767;

    printf("The long int value: %ld",li);
    printf("\nThe long long int value: %lld",lli);
    printf("\nThe long double value: %Le",ld);
    printf("\nThe short value: %i",si);

    return 0;
}