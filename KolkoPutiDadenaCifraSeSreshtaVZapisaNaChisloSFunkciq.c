#include <stdio.h>

int Br(int n, int a);

void main()
{
    int n, a, c;
    do
    {
    printf("n= ");
    scanf("%d", &n);
    }
    while (n<1);
    do
    {
        printf("a= ");
        scanf("%d", &a);
    }
    while ((a<0)||(a>9));
    c=Br(n, a);
    printf("Sreshta se %d puti", c);
}

int Br(int n, int a)
{
    int c=0, b;
    while (n>0)
    {
        b=n%10;
        if (a==b)
            c=c+1;
        n=n/10;
    }
    return c;
}
