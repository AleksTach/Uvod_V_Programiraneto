#include <stdio.h>
int s(int n);

void main()
{
    int n, sum;
    do{
        printf("n= ");
        scanf("%d", &n);
    }
    while (n<1);
    sum=s(n);
    printf("sum= %d", sum);
}

int s(int n)
{
    int sum=0, i=1;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    return sum;
}
