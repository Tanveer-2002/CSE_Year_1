#include<stdio.h>

int main(){
    int a = 10;
    float b = 15.38;
    double c = 2.33323;
    char d = 'T';

    printf("Size of int in byte(s) = %d\n",sizeof(a));
    printf("Size of float in byte(s) = %d\n",sizeof(b));
    printf("Size of doulbe in byte(s) = %d\n",sizeof(c));
    printf("Size of char in byte(s) = %d\n",sizeof(d));

    return 0;

}