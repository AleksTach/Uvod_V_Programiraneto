#include <stdio.h>

void main()
{
    int n, i, sum=0, check=0;
    do{
        printf("Enter the number of elements in the array (1-10): ");
        scanf("%d", &n);
    }
    while(n<1 || n>10);
    int A[n];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    for (i=0; i<n; i++){
        if (A[i]>=0){check=1; break;}
        else sum=sum+A[i];
    }
    if (check==0) printf("NO");
    else {
        printf("The sum of the negative elements is: %d\n", sum);
        printf("The first non-negative element is: %d\n", A[i]);
    }
}