#include <stdio.h>

void main()
{
    int n, a, c, b;
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
    c=0;
    while (n>0)
    {
        b=n%10;
        if (a==b)
            c=c+1;
        n=n/10;
    }
    printf("c= %d", c);
}
