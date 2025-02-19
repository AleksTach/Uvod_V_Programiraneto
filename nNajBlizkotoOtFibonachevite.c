#include <stdio.h>
void main()
{
    int n, i, d_n=0, c=1, predishno_c=0;
    printf("Number: ");
    scanf("%d", &n);
    while(d_n>=0)
    {
        c=c+predishno_c;
        predishno_c=d_n;
        d_n=c;
        if (n<d_n)
            break;;
    }
    printf("The closest number of Fibonacci is: %d\n", d_n);
}
