#include <stdio.h>

void main()
{
    int n, c, a;
    do
    {
    printf("n= ");
    scanf("%d", &n);
    }
    while (n<1);
    c=0;
    a=0;
    while (n!=0)
    {
        a=n%2;
        if (a==1)
            c=c+1;
        n=n/2;
    }
    printf("Count= %d", c);
}
