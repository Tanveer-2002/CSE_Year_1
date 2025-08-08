#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int add = X + Y;
    int sub = X - Y;
    int multi = X * Y;

    printf("Addition: %d\n",add);
    printf("Subtraction: %d\n",sub);
    printf("Multiplication: %d\n",multi);

    if (Y!=0) {
        int quotient = X / Y;
        int remainder = X % Y;
        printf("Division: %d\n",quotient);
        printf("Remainder: %d\n",remainder);
    }
    else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
