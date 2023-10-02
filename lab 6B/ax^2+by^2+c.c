#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    double r1_real, r2_real, r1_imaginary, r2_imaginary;

    printf("Compare Your equation with ax^2 + bx + c \n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1_real = (-b + sqrt(d)) / (2.0 * a);
        r2_real = (-b - sqrt(d)) / (2.0 * a);
        printf("Real solutions: x = %.2lf and x = %.2lf\n", r1_real, r2_real);
    }
    else if (d < 0)
    {
        r1_real = -b / (2.0 * a);
        r1_imaginary = sqrt(-d) / (2.0 * a);
        r2_real = -b / (2.0 * a);
        r2_imaginary = -sqrt(-d) / (2.0 * a);
        printf("Imaginary solutions: x = %.2lf + %.2lfi and x = %.2lf %.2lfi\n", r1_real, r1_imaginary, r2_real, r2_imaginary);
    }
    else
    {
        r1_real = -b / (2.0 * a);
        printf("Real and equal solution: x = %.2lf\n", r1_real);
    }

    return 0;
}
