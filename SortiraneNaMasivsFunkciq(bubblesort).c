#include <stdio.h>
#define MAX_BR 1000

void swap(float *pa, float *pb);

int main()
{
    int n, sorted, arr[MAX_BR];
    do {
        printf("n= ");
        scanf("%d", &n);
    } while(n < 1 || n > MAX_BR);
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    };
    for(int i = 0; i < n - 1; i++) {
        sorted = 1;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                sorted = 0;
            }
        }
        if (sorted) break;
    }
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void swap(float *pa, float *pb)
{
    float temp = *pa;
    *pa = *pb;
    *pb = temp;
}