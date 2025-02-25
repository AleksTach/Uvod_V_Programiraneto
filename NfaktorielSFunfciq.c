#include<stdio.h>

int fact(int n);
int fact1(int n);

void main()
{
    int n;
    do{
     printf("n=? (n>=0): ");
     scanf("%d",&n);
    }while(n<0);
    printf("\n%d!=%d",n,fact(n));
}


int fact(int n)
{
    int p=1,i;
    for(i=1;i<=n;i++)p=p*i;
    return p;
}

int fact1(int n)
{
    if(n==0)return 1;
    else return n*fact1(n-1);
}
