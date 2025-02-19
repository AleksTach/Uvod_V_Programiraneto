#include <stdio.h>

void main()
{
    int n, c, i;
    do
    {
        printf("n= ");
        scanf("%d", &n);
    } while (n<1);
    c=0;
    i=2;
    while (i<=n)
    {
        if (n%i==0)
        {
            c=c+1;
            printf("a= %d \n", i);
            n=n/i;
        }
        else
            i=i+1;
    }
    printf("count= %d", c);
}
