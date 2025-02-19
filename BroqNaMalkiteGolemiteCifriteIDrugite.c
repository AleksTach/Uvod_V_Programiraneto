#include <stdio.h>
void main()
{
    unsigned char c;
    int br_m=0, br_g=0, br_c=0, br_o=0;
    printf("Enter characters: ");
    do{
        scanf("%c", &c);
         if (('A'<=c)&&(c<='Z'))
            br_g++;
        else if (('a'<=c)&&(c<='z'))
            br_m++;
        else if (('0'<=c)&&(c<='9'))
            br_c++;
        else
            br_o++;
    }
    while (c!='\n');
    br_o--;
    printf("Capitals: %d\nSmalls: %d\nNumbers: %d\nSymbols: %d\n", br_g, br_m, br_c, br_o);
}
