#include <stdio.h>
#include <math.h>

double sqroot(double s, double precision) {
    double x0 = s / 2.0;
    double x1 = 0.0;
    double delta = 1;
    while (delta > precision) {
        x1 = .5 * (x0 + s / x0);
        delta = fabs(x1 - x0);
        x0 = x1;
    }
    return x1;
}

int main() {
    double s;
    scanf("%lf", &s);
    double x = sqroot(s, .0000001);
    printf("x = %.3f",x);

    return 0;
}