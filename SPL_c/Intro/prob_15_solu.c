#include <stdio.h>

int main() {
    float num;

    // Input a floating point number
    printf("Enter a floating point number: ");
    scanf("%f", &num);

    // a) Right justified within 10 columns
    printf("Right justified within 10 columns: %10f\n", num);

    // b) Right justified to 2 columns (may overflow if input > 2 digits)
    printf("Right justified to 2 columns: %2f\n", num);

    // c) Rounded to two decimal places
    printf("Rounded to two decimal places: %.2f\n", num);

    // d) Rounded to integer (no type casting)
    printf("Rounded to integer: %.0f\n", num);

    // e) Exponential/scientific notation
    printf("Scientific notation: %e\n", num);

    return 0;
}
