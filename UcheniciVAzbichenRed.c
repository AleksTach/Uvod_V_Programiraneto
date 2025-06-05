#include <stdio.h>
#include <string.h>
#define maxBR 30
#define maxIM 100

void sort_names(char names[maxBR][maxIM], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                char temp[maxIM];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

void main()
{
    char names[maxBR][maxIM];
    int i, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i+1);
        fgets(names[i], maxIM, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    printf("Sorted names:\n");
    sort_names(names, n);
    for (i = 0; i < n; i++)
    {
        printf("%d. %s\n", i+1, names[i]);
    }
}