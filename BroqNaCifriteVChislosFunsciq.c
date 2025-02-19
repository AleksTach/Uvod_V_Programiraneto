#include <stdio.h>
int s(int n);

void main()
{
    int n, c;
    do
    {
    printf("n= ");
    scanf("%d", &n);
    }
    while (n<1);
    c=s(n);
    printf("c= %d", c);
}

int s(int n)
{
    int c;
    c=0;
    while(n>0)
    {
        n=n/10;
        c=c+1;
    }
    return c;
}
