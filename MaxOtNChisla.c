#include <stdio.h>

void main()
{
    int a, n, max, i;
    do
    {
    printf("n= ");
    scanf("%d", &n);
    }
    while (n<1);
    printf("a= ");
    scanf("%d", &a);
    max=a;
    i=2;
    while (i<=n)
        {
        printf("a= ");
        scanf("%d", &a);
        if (max<a)
            max=a;
            i=i+1;
        }
    printf("max= %d", max);

}
