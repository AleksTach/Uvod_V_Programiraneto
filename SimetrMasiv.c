#include <stdio.h>
#define MAX_BR 100

void main() {
    int n, i, symmetric;
    int elem[MAX_BR];

    do {
        printf("n= ");
        scanf("%d", &n);
    } while (n < 1 || n > MAX_BR);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &elem[i]);
    }

    symmetric = 1;
    for (i = 0; i < n / 2; i++) {
        if (elem[i] != elem[n - 1 - i]) {
            symmetric = 0;
            break;
        }
    }

    if (symmetric) {
        printf("The array is symmetric.\n");
    } else {
        printf("The array is not symmetric.\n");
    }
}
