#include <stdio.h>
#include <string.h>
#define MaxU 30

typedef struct {
    int num;
    char name[100];
    int marks[20];
    float avr;
}student;

void main()
{
    student st[MaxU];
    int n, m;
    do{
        printf("Enter the number of students (max 30): ");
        scanf("%d", &n);
    }while (n < 1 || n > 30);
    do{
        printf("Enter the number of subjects (max 20): ");
        scanf("%d", &m);
    }while (m < 1 || m > 20);
    for (int i =0; i<n; i++){
        printf("Enter the number of student: ");
        scanf("%d", &st[i].num);
        getchar();
        printf("Enter the name of student %d: ", st[i].num);
        fgets(st[i].name, sizeof(st[i].name), stdin);
        st[i].name[strcspn(st[i].name, "\n")] = '\0';
        for (int j=0; j<m; j++){
            do{
            printf("Enter the marks of student %d in subject %d: ", st[i].num, j+1);
            scanf("%d", &st[i].marks[j]);
            st[i].avr += st[i].marks[j];
            }while (st[i].marks[j] < 2 || st[i].marks[j] > 6);
        }
        st[i].avr /= m;
    }
    printf("Table with marks\n");
    printf("Students\t\t");
    for (int j=0; j<m; j++){
        printf("Subject %d\t", j+1);
    }
    printf("Average\t");
    printf("\n");
    for (int i=0; i<n; i++){
        printf("%d. %s\t\t\t", st[i].num, st[i].name);
        for (int j=0; j<m; j++){
            printf("%d\t\t", st[i].marks[j]);
        }
        printf("%.2f\t", st[i].avr);
        printf("\n");
    }
}