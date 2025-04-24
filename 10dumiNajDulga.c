#include <stdio.h>
#include <string.h>
#define MAX 100

void main()
{
    char s[MAX];
    char longestWord[MAX] = "";
    char *word;
    printf("Enter max of 10 words:\n");
    fgets(s, MAX, stdin);
    s[strcspn(s, "\n")] = '\0';

    word = strtok(s, " ");
    while (word != NULL)
    {
        if (strlen(word) > strlen(longestWord))
        {
            strcpy(longestWord, word);
        }
        word = strtok(NULL, " ");
    }
    printf("The longest word is: %s\n", longestWord);
}