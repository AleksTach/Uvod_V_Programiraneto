#include <stdio.h>
#include <string.h>
#define MAX 100

void main()
{
    char s[MAX];
    printf("Your Name:\n");
    fgets(s, MAX, stdin);
    s[strcspn(s, "\n")] = '\0';
    for (int j = 0; s[j]; j++)
    {
            if (s[j] == 32)
            {
                s[j] = '\n';
        }
    }
    printf("Name:\n");
    printf("\n");
    puts(s);
    printf("\n");
}