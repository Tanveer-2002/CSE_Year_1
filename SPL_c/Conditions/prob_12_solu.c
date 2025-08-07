#include<stdio.h>

int main(){
    float a,b;
    int op;
    printf("Enter the numbers: ");
    scanf("%f%f",&a,&b);
    printf("Enter the operation(1-4): ");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("Addition: %f",a+b);
        break;
    case 2:
        printf("Subtraction: %f",a-b);
        break;
    case 3:
        printf("Multiplication: %f",a*b);
        break;
    case 4:
        if(b == 0){
            printf("Division:    Zero as divisor is not valid!");
        }
        else{
            printf("Quotient: %f",a/b);
        }
        break;
    default:
        printf("%c is not a valid operator",op);
        break;
    }
}