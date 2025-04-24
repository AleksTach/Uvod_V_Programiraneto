#include <stdio.h>
#define MAX_BR 10

void enternum(int *A, int *n);
int search(int x, int *A, int n);

int main()
{
    int A[MAX_BR], n, x;
    enternum(A, &n);
    printf("Enter the number to search for: ");
    scanf("%d", &x);
    if (search(x, A, n) == 0) {
        printf("The number %d is not found in the array.\n", x);
    } else {
        printf("The number %d is found.\n", x);
    }
}

int search(int x, int *A, int n)
{
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            return 1;
        }
    }
    return 0;
}

void enternum(int *A, int *n)
{
    do {
        printf("How many numbers do you want to enter? ");
        scanf("%d", n);
    } while(*n < 1 || *n > MAX_BR);
        printf("Enter %d numbers:\n", *n);
    for(int i = 0; i < *n; i++) {
        scanf("%d", &A[i]);
    }
}