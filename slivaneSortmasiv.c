#include <stdio.h>
#define MAX_BR 10

void insertNumbers(int *arr, int *n);
void merge(int *arr1, int n1, int *arr2, int n2, int *result);
void printArray(int *arr, int n);

void insertionSort(int *arr, int n);

int main()
{
    int A[MAX_BR], B[MAX_BR], C[2 * MAX_BR];
    int n1, n2, n3;

    insertNumbers(A, &n1);
    insertNumbers(B, &n2);

    insertionSort(A, n1);
    insertionSort(B, n2);

    merge(A, n1, B, n2, C);
    n3 = n1 + n2;

    printf("Merged and sorted array:\n");
    printArray(C, n3);

    return 0;
}

void insertNumbers(int *arr, int *n)
{
    do {
        printf("How many numbers do you want to enter (1-%d)? ", MAX_BR);
        scanf("%d", n);
    } while (*n < 1 || *n > MAX_BR);

    printf("Enter %d numbers:\n", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++) {
        int x = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > x) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

void merge(int *arr1, int n1, int *arr2, int n2, int *result)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    while (i < n1) {
        result[k++] = arr1[i++];
    }
    while (j < n2) {
        result[k++] = arr2[j++];
    }
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
