#include <stdio.h>
#define MAX_BR 10

void main() {
    int n, arr[MAX_BR];
    do {
        printf("n= ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_BR);
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The reversed combination is:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
