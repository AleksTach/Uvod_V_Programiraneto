#include <stdio.h>
#define MAX_BR 10

void swap(int *pa, int *pb);
void enterNumbers(int *arr, int *n);
void sortArray(int *arr, int n);
void printArray(int *arr, int n);

void main()
{
    int n, arr[MAX_BR];
    enterNumbers(arr, &n);
    sortArray(arr, n);
    printArray(arr, n);
}

void enterNumbers(int *arr, int *n)
{
    do {
        printf("How many numbers do you want to enter? ", MAX_BR);
        scanf("%d", &n);
    } while(*n < 1 || *n > MAX_BR);
    printf("Enter %d numbers:\n", *n);
    for(int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

void sortArray(int *arr, int n)
{
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            swap(&arr[i], &arr[min]);
        }
    }
}

void printArray(int *arr, int n)
{
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}