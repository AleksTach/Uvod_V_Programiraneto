#include <stdio.h>
void main ()
{
    unsigned char c;
    printf("Enter characters: ");
    do
    {
        scanf("%c", &c);
        if (('a'<=c)&&(c<= 'z'))
            c=c-32;
        printf("%c", c);
    }
    while(c!= '.');
}
