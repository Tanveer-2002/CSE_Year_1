#include<stdio.h>
float cgpa = 3.85;

int main(){

    printf("Global: %f\n",cgpa);

    float cgpa = 4.00;
    printf("Local: %f\n",cgpa);

    {
        extern float cgpa;
        printf("Global: %f(using extern)",cgpa);
    }
    return 0;
}