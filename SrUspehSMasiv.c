#include <stdio.h>
#define max_br 36 

void main()
{
    int n, f=0, k=0;
    float stud[max_br], srUsp= 0;
    do{
        printf("n= ");
        scanf("%d", &n);
    } while(n < 1 || n > max_br);
    printf("Write the grades for %d students:\n", n);
    for(int i = 0; i < n; i++)
    {
        do{
        printf("Grade for student %d is ", i+1);
        scanf("%f", &stud[i]);}
        while(stud[i] < 2 || stud[i] > 6);
    }
    for(int i = 0; i < n; i++)
    {
        srUsp += stud[i];
    }
    srUsp = srUsp/n;
    printf("The average grade is %.2f\n", srUsp);

    printf("Grade 6:\n");
    for(int i = 0; i < n; i++)
    {
        if(stud[i] == 6){
            printf("Student %d\n", i+1);
            f++;
        }
    }
    if (f == 0)
    printf("No students with grade 6\n");

    printf("Grade 2:\n");
    for(int i = 0; i < n; i++)
    {
        if (stud[i] == 2){
            printf("Student %d\n", i+1);
            k++;
        }
    }
    if (k == 0)
    printf("No students with grade 2\n");
}