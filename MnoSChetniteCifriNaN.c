#include <stdio.h>

void main()
{
    int n, m, c, a;
    do
    {
    printf("N= ");
    scanf("%d", &n);
    }
    while (n<1);
    m=0;
    c=1;
    while (n!=0)
    {
        a=n%10;
        if (a%2==0)
        {
            m=m+c*a;
            c=c*10;
        }
        n=n/10;
    }
    if (c==1)
        printf("Nqma chetni chisla");
    else
        printf("M= %d", m);
}
