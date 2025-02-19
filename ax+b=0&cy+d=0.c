#include <stdio.h>

int u(float a, float b, float *px);

int main()
{
    float a, b, x, c, d, y;
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    printf("c=");
    scanf("%f", &c);
    printf("d=");
    scanf("%f", &d);

    if (u(a, b, &x) == 3 && u(c, d, &y) == 3)
        printf("x + y = %.2f\n", x + y);
    else
        printf("Something's not valid\n");
    return 0;
}

int u(float a, float b, float *px)
{
    if (a == 0)
    {
        if (b == 0) return 1;
        else return 2;
    }
    else
    {
        *px = -b / a;
        return 3;
    }
}
