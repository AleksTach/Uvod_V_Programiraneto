#include <stdio.h>

void main()
{
    int n, c, i;
    do
    {
    printf("n= ");
    scanf("%d", &n);
    }
    while (n<1);
    c=0;
    i=1;
    while(n>=i)
    {
        if (n%i==0)
        {
            c=c+1;
            printf("i= %d \n", i);
        }
        i=i+1;
    }
    printf("c= %d", c);
}

