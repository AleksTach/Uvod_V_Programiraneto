#include <stdio.h>

void main()
{
    int n, i, sum;
    do{
        printf("n= ");
        scanf("%d", &n);
    }
    while (n<1);
    sum=0;
    i=1;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("sum= %d", sum);
}
