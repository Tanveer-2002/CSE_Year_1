#include<stdio.h>
int main(){
    unsigned int ui;
    unsigned long int uli;
    unsigned long long int  ulli;
    unsigned short int usi;

    ui = 4294967295;
    uli = 4294967295;
    ulli = 18446744073709551615LLU;
    usi =  65535;

    printf("The unsigend int value: %u",ui);
    printf("\nThe unsigend int value: %lu",uli);
    printf("\nThe unsigend int value: %llu",ulli);
    printf("\nThe unsigend int value: %hu",usi);
    return 0;
}