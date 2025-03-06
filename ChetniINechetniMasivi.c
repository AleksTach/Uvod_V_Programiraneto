#include <stdio.h>
#define MAX_BR 10

void main()
{
    int n, arr[MAX_BR], chet[MAX_BR], nechet[MAX_BR];
    do
    {
        printf("n= ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_BR);
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            chet[j] = arr[i];
            j++;
        }
        else
        {
            nechet[k] = arr[i];
            k++;
        }
    }
    printf("Chetni: ");
    for (int i = 0; i < j; i++)
    {
        printf("%d; ", chet[i]);
    }
    printf("\nNechetni: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d; ", nechet[i]);
    }
}