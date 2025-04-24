#include <stdio.h>
#include <string.h>
#define MAX 100

void main()
{
    char str[MAX], sub[MAX];
    char *i;
    int numb = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a substring: ");
    gets(sub);
    i = strstr(str, sub);
    while (i != NULL) {
        numb++;
        i = strstr(i + 1, sub);
    }
    char *result = strstr(str, sub);
    if (result != NULL) {
        printf("Substring found %d times.\n", numb);
    } else {
        printf("Substring not found\n");
    }
}