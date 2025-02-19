#include <stdio.h>

void main()
{
    int n, i;
    do
    {
    printf("n= ");
    scanf("%d", &n);
    }
    while (n<1);
    i=2;
    while (n%i!=0)
        i=i+1;
    if (i==n)
        printf("Prosto");
    else
        printf("Ne e prosto");
}
