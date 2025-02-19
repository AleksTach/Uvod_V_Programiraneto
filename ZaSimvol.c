#include <stdio.h>
void main()
{
    unsigned char c;
    do{
        c=getche();
        printf("%d", c);
    }while (c!=27);
}
