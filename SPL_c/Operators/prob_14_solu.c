#include <stdio.h>
#include <math.h>  // for ceil(), floor(), fabs()

int main() {
    double X, A, B, C;
    scanf("%lf", &X);

    A = round(X);
    B = floor(X);
    C = fabs(X);

    printf("A: %.0lf\n", A);
    printf("B: %.0lf\n", B);
    printf("C: %.2lf\n", C);

    return 0;
}
