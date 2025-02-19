#include <stdio.h>
#include <math.h>

int f(double a, double b, double c, double *px, double *py);

void main() {
    double a, b, c, x, y;
    int roots;

    printf("Enter coefficients a, b, and c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    roots = f(a, b, c, &x, &y);
    switch (roots) {
        case 2:
            printf("Two real roots: x1 = %.2lf, x2 = %.2lf\n", x, y);
            break;
        case 1:
            printf("One real root: x = %.2lf\n", x);
            break;
        case -1:
            printf("Indeterminate equation.\n");
            break;
        default:
            printf("No real roots.\n");
            break;
    }
}

int f(double a, double b, double c, double *px, double *py) 
{
    double discriminant;
    if (a == 0 && b == 0 && c == 0) {
        printf("Indeterminate equation.\n");
        return -1;
    }
    if (a == 0) {
        if (b == 0) {
            printf("No solution.\n");
            return 0;
        }
        *px = *py = -c / b;
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        *px = (-b + sqrt(discriminant)) / (2 * a);
        *py = (-b - sqrt(discriminant)) / (2 * a);
        return 2;
    } else if (discriminant == 0) {
        *px = *py = -b / (2 * a);
        return 1;
    } else {
        return 0;
    }
}
