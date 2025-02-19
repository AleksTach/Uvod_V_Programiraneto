#include <stdio.h>
void main()
{
    int n, i, d_n=0, c=1, predishno_c=0;
    printf("Number: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        c=c+predishno_c;
        predishno_c=d_n;
        d_n=c;
    }
    printf("The number refers to: %d\n", d_n);
}
