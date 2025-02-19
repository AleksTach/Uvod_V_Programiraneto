#include <stdio.h>
void main()
{
    int n, a, OK, i, max;
    do
    {
    printf("n= ");
    scanf("%d", &n);
    }
    while (n<1);
    do
    {
        printf("a= ");
        scanf("%d", &a);
        OK=0;
        i=0;
        if (a%3==0)
        {
            max=a;
            OK=1;
        }
        i=i+1;
    }
    while ((OK==0)&&(i<n));
    while (i<n)
    {
        printf("a= ");
        scanf("%d", &a);
        if (a%3==0)
        {
            if(max<a)
                max=a;
            OK=1;
        }
        i=i+1;
    }
    if (OK==1)
        printf("max= %d", max);
    else
        printf("Nqma chisla");
}
