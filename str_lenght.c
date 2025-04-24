#include <stdio.h>
#include <string.h>
#define MAX 100

void main()
{
    char str[MAX];
    int length = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i]; i++)
        length++;
    printf("Length of the string is: %d\n", length);
    printf("Length of the string using strlen: %d\n", strlen(str));
}