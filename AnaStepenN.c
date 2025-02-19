#include <stdio.h>
int main()
{
    int n;
    float a, res, m;
    do{
        printf("A= ");
        scanf("%f", &a);
    }
    while(a==0);
    printf("N= ");
    scanf("%d", &n);
    res=1;
    if (n<0)
        m=-n;
    else
        m=n;
    while (m>0){
        res=res*a;
        m=m-1;
    }
    if (n<0)
        res=1/res;
    printf("A^n= %f", res);
    return 0;
}

