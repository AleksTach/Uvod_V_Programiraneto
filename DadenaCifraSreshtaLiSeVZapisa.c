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
    do
    {
        printf("c= ");
        scanf("%d", &c);
    }
    while ((c<0)||(c>9));
    i=0;
    while (n>0)
    {
        if (n%10==c)
            i=i+1;
        n=n/10;
    }
    if (i>0)
        printf("Cifrata se sreshta %d puti.", i);
    else
        printf("Cifrata ne se sreshta");
}
