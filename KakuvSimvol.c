#include <stdio.h>
void main()
{
    unsigned char c;
    printf("c= ");
    scanf("%c", &c);
    if ('A'<=c&&'Z'>=c)
        printf("%c is a capital.\n", c);
    else if ('a'<=c&&'z'>=c)
        printf("%c is small.\n", c);
    else if ('0'<=c&&'9'>=c)
        printf("%c is a number.\n", c);
    else
        printf("%c is other symbol.", c);

}
