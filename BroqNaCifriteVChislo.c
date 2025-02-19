#include <stdio.h>

void main()
{
    int n, c;
    do
    {
    printf("n= ");
    scanf("%d", &n);
    }
    while (n<1);
    c=0;
    while(n>0)
    {
        n=n/10;
        c=c+1;
    }
    printf("c= %d", c);
}
