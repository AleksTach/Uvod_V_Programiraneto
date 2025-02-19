#include <stdio.h>

void fig(int n, unsigned char c)
{
    int i, k;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
            printf("%2c", c);
        printf("\n");
    }
}

int main()
{
    int n;
    unsigned char c;
    printf("How many rows: ");
    scanf("%d", &n);
    getchar();
    printf("What symbol to use: ");
    scanf("%c", &c);
    fig(n, c);
    return 0;
}
