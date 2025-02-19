#include <stdio.h>

void main()
{
    int n, a, sum;
    do
    {
    printf("n= ");
    scanf("%d", &n);
    }
    while (n<1);
    sum=0;
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("sum= %d", sum);
}
