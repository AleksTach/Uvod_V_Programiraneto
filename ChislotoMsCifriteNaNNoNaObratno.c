#include <stdio.h>

void main()
{
    int n, m, id;
    do
    {
    printf("N= ");
    scanf("%d", &n);
    }
    while (n<1);
    m=0;
    while (n!=0)
    {
        id=n%10;
        m=m*10+id;
        n=n/10;
    }
    printf("M= %d", m);
}
