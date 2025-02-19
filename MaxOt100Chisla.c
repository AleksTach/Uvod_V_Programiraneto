#include <stdio.h>

void main()
{
    int a, max, i;
    printf("a= ");
    scanf("%d", &a);
    max = a;
    i = 2;
    while (i<=100)
    {
        printf("a= ");
        scanf("%d", &a);
        if (max<a)
            max=a;
        i=i+1;
    }
    printf("max = %d", max);
}
