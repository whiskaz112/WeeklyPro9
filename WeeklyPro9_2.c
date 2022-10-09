#include <math.h>
#include <stdio.h>

int main()
{
    double number, squareRoot;
    scanf("%lf", &number);
    squareRoot = sqrt(number);
    printf("%.3lf", squareRoot);
    return 0;
}