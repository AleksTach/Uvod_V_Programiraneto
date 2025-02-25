#include <stdio.h>

void reverseInput() {
    unsigned char c;
    scanf("%c", &c);
    if (c != '.')
        reverseInput();
        printf("%c", c);
}

void main() {
    printf("Enter characters: ");
    reverseInput();
}
