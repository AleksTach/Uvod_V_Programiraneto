#include <stdio.h>

void main() {
    unsigned char c;
    int f = 1;
    printf("Enter a sequence:\n");

    while (1) {
        scanf("%c", &c);

        if (c != '-' && (c < '0' || c > '9')) {
            if (c == '\n')
                break;
            f = 0;
        }
    }

    if (f)
        printf("This can be converted to a number.");
    else
        printf("This cannot be converted to a number.");
}
