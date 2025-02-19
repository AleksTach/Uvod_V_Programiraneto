#include <stdio.h>

float stepen(float a, int n)
{
    float p=1;
    int m, i;
    if (n>0) m=n; else m=-n;
    for (i=1; i<=m; i++) p=p*a;
    if (n<0) p=1/p;
    return p;
}

void main()
{
    float b, s;
    int k;
    scanf("%f", &b);
    scanf("%d", &k);
    s=stepen(b, k);
    printf("%.2f", s);
}
