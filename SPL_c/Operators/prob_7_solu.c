#include<stdio.h>

int main(){
    int intNum;
    float floatNum;
    scanf("%d %f",&intNum,&floatNum);

    int f_to_i = floatNum;
    float i_to_f = intNum;

    printf("Assignment: %f assigned to an int produces %d\n",floatNum,f_to_i);
    printf("Assignment: %d assigned to a float produces %f\n",intNum,i_to_f);
    printf("Type Casting: (float) %d produces %f\n",intNum,(float)intNum);
    printf("Type Casting: (int) %f produces %d",floatNum,f_to_i);

    return 0;

}