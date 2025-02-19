#include<stdio.h>


void change(int *px,int *py);

void main()
{
    int x=5, y=7;
    int p=10, q=12;
    change(&x,&y);
    change(&p,&q);

    printf("\nx=%d y=%d",x,y);
    printf("\np=%d q=%d",p,q);

}

void change(int *px, int *py)
{
    int c;
    c=*px;
    *px=*py;
    *py=c;
}
