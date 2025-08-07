#include<stdio.h>

int main(){
    float a,b;
    char op;
    scanf("%f %c %f",&a,&op,&b);

    switch (op)
    {
    case '+':
        printf("Addition: %f",a+b);
        break;
    case '-':
        printf("Subtraction: %f",a-b);
        break;
    case '*':
        printf("Multiplication: %f",a*b);
        break;
    case '/':
        if(b == 0){
            printf("Division:    Zero as divisor is not valid!");
        }
        else{
            printf("Division: %f",a/b);
        }
        break;
    default:
        printf("%c is not a valid operator",op);
        break;
    }
}