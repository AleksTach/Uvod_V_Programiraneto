#include <stdio.h>
#define MAX_BR 10
void change(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main() {
    int n, arr[MAX_BR], i;
    do {
        printf("n= ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_BR);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++) {
        change(&arr[i], &arr[n - 1 - i]);
    }
    printf("The reversed combination is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}