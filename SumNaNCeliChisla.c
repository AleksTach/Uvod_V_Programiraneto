#include <stdio.h>

void main()
{
    int n, i, sum, a;
    do{
        printf("n= ");
        scanf("%d", &n);
    }
    while (n<1);
    sum=0;
    i=1;
    while (i<=n)
    {
        printf("a= ");
        scanf("%d", &a);
        sum=sum+a;
        i=i+1;
    }
    printf("sum= %d", sum);
}
