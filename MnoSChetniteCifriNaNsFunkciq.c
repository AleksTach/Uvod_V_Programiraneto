#include <stdio.h>
int em(int n);

void main()
{
    int n, m;
    do
    {
    printf("N= ");
    scanf("%d", &n);
    }
    while (n<1);
    m=em(n);
    if (m==0)
        printf("Nqma chetni chisla");
    else
        printf("M= %d", m);
}

int em(int n)
{
    int m=0, c=1, a;
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
    return m;
}

