#include <stdio.h>
int em(int n);

void main()
{
    int n, m, id;
    do
    {
    printf("N= ");
    scanf("%d", &n);
    }
    while (n<1);
    m=em(n);
    printf("M= %d", m);
}

int em (int n)
{
    int m=0, id;
    while (n!=0)
    {
        id=n%10;
        m=m*10+id;
        n=n/10;
    }
    return m;
}
