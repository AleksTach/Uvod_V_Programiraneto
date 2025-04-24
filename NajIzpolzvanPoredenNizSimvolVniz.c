#include <stdio.h>
#include <string.h>
#define MAX 100

void main()
{
    char s[MAX];
    char currentSymbol, maxSymbol;
    int numb = 1, maxCount = 1;
    printf("Enter a string:\n");
    fgets(s, MAX, stdin);
    s[strcspn(s, "\n")] = '\0'; 

    currentSymbol = s[0];
    maxSymbol = s[0];

    for (int j = 1; s[j] != '\0'; j++) {
        if (s[j] == currentSymbol) {
            numb++;
        } else {
            if (numb > maxCount) {
                maxCount = numb; 
                maxSymbol = currentSymbol; 
            }
            currentSymbol = s[j];
            numb = 1; 
        }
    }

    if (numb > maxCount) {
        maxCount = numb;
        maxSymbol = currentSymbol;
    }

    printf("The symbol '%c' has the most consecutive occurrences: %d times\n", maxSymbol, maxCount);
}