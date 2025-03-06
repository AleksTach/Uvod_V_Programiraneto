#include <stdio.h>

void Flip(int n);
void Flop(int n);

void main()
{
    int n;
    printf("n= ");
    scanf("%d", &n);

}

void Flip(int n)
{
    if (n==0) return;
    else{
        printf("Flip ");
        Flop(n-1);
    }
}

void Flop(int n)
{
    if (n==0) return;
    else{
        printf("Flop ");
        Flip(n-1);
    }
}