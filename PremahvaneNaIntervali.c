#include <stdio.h>
#include <string.h>
#define MAX 100 

void main()
{
    char s[MAX];
    printf("Enter a string:\n");
    fgets(s, MAX, stdin);
    int start = 0;
    while (s[start] == 32) {
        for (int k = start; s[k]; k++) {
            s[k] = s[k + 1];
        }
    }
    for (int j = 0; s[j]; j++)
    {
        if (s[j] == 32 && s[j + 1] == 32)
        {
            for (int k = j; s[k]; k++)
            {
                s[k] = s[k + 1];
            }
            j--;
        }
    }
    printf("String:\n");
    puts(s);
}