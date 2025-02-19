#include <stdio.h>
int s(int n);

void main()
{
    int n, a, sum;
    do
    {
    printf("n= ");
    scanf("%d", &n);
    }
    while (n<1);
    sum=s(n);
    printf("sum= %d", sum);
}

int s(int n)
{
    int sum=0, a;
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    return sum;
}
