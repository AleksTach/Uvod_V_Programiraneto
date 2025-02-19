#include <stdio.h>

void main()
{
    int n, i, u, a;
    do{
        printf("n= ");
        scanf("%d", &n);
    }
    while (n<1);
    i=1;
    u=0;
    while (n>=i)
    {
       do{
        printf("a= ");
        scanf("%d", &a);
       }
       while ((a<2)||(a>6));
        if (a==6)
            u=u+1;
       i=i+1;
    }
    printf("U= %d", u);

}
