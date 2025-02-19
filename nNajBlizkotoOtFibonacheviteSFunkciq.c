#include <stdio.h>

int f(int n);
int f_max(int n);
int f_min(int n);

void main()
{
    int n;
    do{
        printf("n=?(n>0):");
        scanf("%d", &n);
    } while(n < 1);

    printf("\nf(%d)=%d", n, f(n));
    printf("\nf_max(%d)=%d", n, f_max(n));
    printf("\nf_min(%d)=%d\n", n, f_min(n));
}

int f(int n)
{
    int a = 1, b = 1, c = 1, i;
    for(i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int f_max(int n)
{
    int max_val = 1, a = 1, b = 1, c = 1, i;
    for(i = 3; i <= n; i++)
    {
        c = a + b;
        if (c > max_val)
            max_val = c;
        a = b;
        b = c;
    }
    return max_val;
}

int f_min(int n)
{
    return 1;
}
