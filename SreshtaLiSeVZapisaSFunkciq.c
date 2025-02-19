#include <stdio.h>

int Sreshta(int n, int c);

void main()
{
    int n, c, Sr;
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
    Sr=Sreshta(n, c);
    if (Sr)
        printf("Cifrata se sreshta");
    else
        printf("Cifrata ne se sreshta");
}

int Sreshta(int n, int c)
{
     int i=0;
     while (n>0)
    {
        if (n%10==c)
            i=i+1;
        n=n/10;
    }
    if (i>1)
        return 1;
    else
        return 0;
}
