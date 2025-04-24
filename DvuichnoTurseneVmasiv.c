#include <stdio.h>
#define MAX_BR 10

int binaryS(int *arr, int left, int right, int x);
void swap(int *pa, int *pb);
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
    for (int i = 0; i < n - 1; i++) {
        sorted = 1;
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(&A[j], &A[j + 1]);
                sorted = 0;
            }
        }
        if (sorted) break;
    }
    int result = binaryS(A, 0, n-1, x);
    if (result)
        printf("Element found in the array\n");
    else
        printf("Element not found in the array\n");
    return 0;
}

int binaryS(int *arr, int left, int right, int x)
{
    int mid;
    while (left <= right) {
        mid = (right + left) / 2;

        if (arr[mid] == x)
            return 1;

        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

void swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
