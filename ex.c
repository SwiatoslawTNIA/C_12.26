#include <stdio.h>
 
int main() {
    double A = 0, B = 0, C = 0;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    double w_a = 1/5;
    double w_b = 3/10;
    double w_c = 1/2;
    double res = w_a*A + w_b*B + w_c*C;
    printf("MEDIA = %.1f\n", res);
    return 0;
}