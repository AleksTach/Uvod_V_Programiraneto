#include <stdio.h>
#include <string.h>
#define MAXU 30
#define MAXP 20

void main()
{
    int marks[MAXU][MAXP];
    int n, m, i, j;
    float avru[MAXU], avrp[MAXP], avr1, avr2, avr = 0;
    do{
        printf("Enter the number of students (1-30): ");
        scanf("%d", &n);
    }while (n < 1 || n > MAXU);
    do{
        printf("Enter the number of subjects (1-20): ");
        scanf("%d", &m);
    }while (m < 1 || m > MAXP);
    for (i = 0; i < n; i++){
        printf("Enter marks for student %d:\n", i + 1);
        for (j = 0; j < m; j++){
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (i = 0; i < n; i++){
        avru[i] = 0;
        for (j = 0; j < m; j++){
            avru[i] += marks[i][j];
        }
        avru[i] /= m;
    }
    for (j = 0; j < m; j++){
        avrp[j] = 0;
        for (i = 0; i < n; i++){
            avrp[j] += marks[i][j];
        }
        avrp[j] /= n;
    }
    for (i = 0; i < n; i++){
        avr1 += avru[i];
    }
    avr1 /= n;
    for (j = 0; j < m; j++){
        avr2 += avrp[j];
    }
    avr2 /= m;
    avr = (avr1 + avr2) / 2;
    printf("Table of marks:\n");
    printf("Students\t");
    for (j = 0; j < m; j++){
        printf("Subject %d\t", j + 1);
    }
    printf("\t\t\t");
    printf("\n");
    for (i = 0; i < n; i++){
        printf("\n%d.\t\t", i + 1);
        for (j = 0; j < m; j++){
            printf("%d\t\t", marks[i][j]);
        }
        printf("%.2f\t\t", avru[i]);
    }
    printf("\n\n\t\t");
    for (j = 0; j < m; j++){
        printf("%.2f\t\t", avrp[j]);
    }
    printf("%.2f\t\t", avr);
    printf("\n");   
}