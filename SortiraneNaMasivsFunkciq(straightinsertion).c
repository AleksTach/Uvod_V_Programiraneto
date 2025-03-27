#include <stdio.h>
#define MAX_BR 10

int main()
{
    int n, arr[MAX_BR], i, j, x;
    do {
        printf("How many numbers do you want to enter? ", MAX_BR);
        scanf("%d", &n);
    } while(n < 1 || n > MAX_BR);
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        x = arr[i];
        j=i-1;
        while (j >= 0 && arr[j] > x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
