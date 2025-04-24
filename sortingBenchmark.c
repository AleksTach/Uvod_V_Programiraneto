#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

void bubble(int *arr, int n, int *swaps);
void selection(int *arr, int n, int *swaps);
void insertion(int *arr, int n, int *swaps);
void copyArray(int *src, int *dest, int n);
void printArray(int *arr, int n);

int main()
{
    int arr[SIZE], temp[SIZE], n;
    do {
        printf("How many numbers do you want to enter? ");
        scanf("%d", &n);
    } while(n < 1 || n > SIZE);
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10000;

    clock_t start, end;
    double time_taken, min_time = __DBL_MAX__;
    char *best_algorithm = "";
    int min_swaps = __INT_MAX__;
    char *least_swaps_algorithm = "";

    copyArray(arr, temp, n);
    start = clock();
    int swaps = 0;
    bubble(temp, n, &swaps);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Bubble Sort: Swaps = %d, Time = %.2f ms\n", swaps, time_taken);
    if (time_taken < min_time) {
        min_time = time_taken;
        best_algorithm = "Bubble Sort";
    }
    if (swaps < min_swaps) {
        min_swaps = swaps;
        least_swaps_algorithm = "Bubble Sort";
    }

    swaps = 0;
    copyArray(arr, temp, n);
    start = clock();
    selection(temp, n, &swaps);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Selection Sort: Swaps = %d, Time = %.2f ms\n", swaps, time_taken);
    if (time_taken < min_time) {
        min_time = time_taken;
        best_algorithm = "Selection Sort";
    }
    if (swaps < min_swaps) {
        min_swaps = swaps;
        least_swaps_algorithm = "Selection Sort";
    }

    swaps = 0;
    copyArray(arr, temp, n);
    start = clock();
    insertion(temp, n, &swaps);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Insertion Sort: Swaps = %d, Time = %.2f ms\n", swaps, time_taken);
    if (time_taken < min_time) {
        min_time = time_taken;
        best_algorithm = "Insertion Sort";
    }
    if (swaps < min_swaps) {
        min_swaps = swaps;
        least_swaps_algorithm = "Insertion Sort";
    }

    printf("\nLeast Time Taken: %.2f ms by %s\n", min_time, best_algorithm);
    printf("Least Swaps: %d by %s\n", min_swaps, least_swaps_algorithm);

    return 0;
}

void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++)
        dest[i] = src[i];
}

void bubble(int *arr, int n, int *swaps) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                        (*swaps)++;
            }
        }
    }
}

void selection(int *arr, int n, int *swaps) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            (*swaps)++;
        }
    }
}

void insertion(int *arr, int n, int *swaps) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        if (j + 1 != i) {
            arr[j + 1] = key;
            (*swaps)++;
        }
    }
}
