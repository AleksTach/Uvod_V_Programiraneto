#include <stdio.h>
void main()
{
    unsigned char c;
    printf("The symbol is: ");
    scanf("%c", &c);
    if ('a'<=c&&'z'>=c){
        c=c-32;
        printf("The capital is: %c\n", c);
    }
    else
        printf("No change.\n%c\n", c);
}
