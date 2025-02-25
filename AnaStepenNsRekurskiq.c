#include <stdio.h>

float s1(float a, int n);
float s2(float a, int n);

void main()
{
    float b;
    int k;
    scanf("%f", &b);
    scanf("%d", &k);
    printf("norm:%.2f", s1(b, k));
    printf("reku:%.2f", s2(b, k));

}

float s1(float a, int n)
{
    float p=1;
    int m, i;
    if (n>0) m=n; else m=-n;
    for (i=1; i<=m; i++) p=p*a;
    if (n<0) p=1/p;
    return p;
}

float s2(float a, int n)
{
    if (n==0) return 1;
    else if (n>0) return a*s2(a, n-1);
    else if (n<0) return 1/a*s2(a, n+1);
}
