#include <stdio.h>

int fib1(int n);
int fib2(int n);
int i=0;

void main()
{
    int n;
    do{
        printf("n= ");
        scanf("%d", &n);
    } while(n < 1);
    printf("\nfib1(%d)=%d", n, fib1(n));
    printf("\nfib2(%d)=%d\n", n, fib2(n));
    printf("\nfib2 se izpulni %d puti\n", i);
}

int fib1(int n)
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

int fib2(int n)
{
    i++;
    if (n<3) return 1;
    else return fib2(n-1)+fib2(n-2);
}
