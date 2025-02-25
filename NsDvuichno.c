#include <stdio.h>

void printBinary(int n); 

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Can't be a negative number!\n");
    } else {
        printf("Binary representation: ");
        printBinary(n);
    }
    return 0;
}

void printBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    if (n > 1) {
        printBinary(n / 2);
    }
    printf("%d", n % 2);
}
