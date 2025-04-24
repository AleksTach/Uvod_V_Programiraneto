#include <stdio.h>
#define MAX_BR 10

int main()
{
    int x, A[MAX_BR], n, i, sorted, join;
    do {
        printf("How many numbers do you want to enter (1-%d)? ", MAX_BR);
        scanf("%d", &n);
    } while (n < 1 || n > MAX_BR);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &x);
    for(int i = 0; i < n - 1; i++) {
        sorted = 1;
        for(int j = 0; j < n - i - 1; j++) {
            if(A[j] > A[j + 1]) {
                swap(&A[j], &A[j + 1]);
                sorted = 0;
            }
        }
            if (sorted) break;
        join = search(x, A, n);
    }
    join = search(x, A, n);
    if (join == 0) {
        printf("The number %d is not found in the array.\n", x);
    } else {
        printf("The number %d is found.\n", x);
    }
}

void swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int search(int x, int *A, int n)
{
    int i, check=0;
    for (i = 0; i < n; i++) {
        if (A[i] > x) {
            return 0;
        }
        else if (A[i] == x) {
            check = 1;
            break;
        }
    }
    return check;
}