#include <stdio.h>
#include <string.h>
#define MAX 100

void main() {
    char s[MAX], s1[MAX], s2[MAX];
    printf("Enter a string:\n");
    fgets(s, MAX, stdin);
    printf("Enter what you want to replace:\n");
    fgets(s1, MAX, stdin);
    printf("Enter what you want to replace with:\n");
    fgets(s2, MAX, stdin);

    s[strcspn(s, "\n")] = '\0';
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    char result[MAX] = "";
    char *current = s;
    char *pos;
    int len1 = strlen(s1);

    while ((pos = strstr(current, s1)) != NULL) {
        int lenBefore = pos - current;
        strncat(result, current, lenBefore);
        strcat(result, s2);
        current = pos + len1;
    }
    strcat(result, current);
    printf("Result:\n");
    puts(result);
}