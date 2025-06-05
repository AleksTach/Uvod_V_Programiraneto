#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define MaxU 30

typedef struct {
    int num;
    char name[100];
    int marks[20];
    float avr;
}student;

void sortByNumber(student st[], int n) {
    student temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (st[j].num > st[j+1].num) {
                temp = st[j];
                st[j] = st[j+1];
                st[j+1] = temp;
            }
        }
    }
}

void sortByName(student st[], int n) {
    student temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(st[j].name, st[j+1].name) > 0) {
                temp = st[j];
                st[j] = st[j+1];
                st[j+1] = temp;
            }
        }
    }
}

void sortByAverage(student st[], int n) {
    student temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (st[j].avr < st[j+1].avr) {
                temp = st[j];
                st[j] = st[j+1];
                st[j+1] = temp;
            }
        }
    }
}

void displayTable(student st[], int n, int m) {
    system("cls");
    printf("\n\n");
    printf("╔════════════════════════════════════════════════════════════════════╗\n");
    printf("║                         TABLE WITH MARKS                           ║\n");
    printf("╠══════════════════════╦");
    for (int j = 0; j < m; j++) {
        printf("══════════╦");
    }
    printf("═══════════╣\n");
    
    printf("║ Student              ║");
    for (int j = 0; j < m; j++) {
        printf(" Subj. %2d ║", j+1);
    }
    printf("  Average  ║\n");
    
    printf("╠══════════════════════╬");
    for (int j = 0; j < m; j++) {
        printf("══════════╬");
    }
    printf("═══════════╣\n");
    
    for (int i = 0; i < n; i++) {
        printf("║ %3d. %-15s ║", st[i].num, st[i].name);
        for (int j = 0; j < m; j++) {
            printf("    %d     ║", st[i].marks[j]);
        }
        printf("   %.2f    ║\n");
        
        if (i < n-1) {
            printf("╠══════════════════════╬");
            for (int j = 0; j < m; j++) {
                printf("══════════╬");
            }
            printf("═══════════╣\n");
        }
    }
    
    printf("╚══════════════════════╩");
    for (int j = 0; j < m; j++) {
        printf("══════════╩");
    }
    printf("═══════════╝\n");
    
    printf("\nPress any key to return...");
    getch();
}

void scholarshipStudents(student st[], int n) {
    system("cls");
    printf("\n\n");
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("║       STUDENTS ELIGIBLE FOR SCHOLARSHIP            ║\n");
    printf("║               (average ≥ 5.50)                     ║\n");
    printf("╠═══════╦══════════════════════════════╦═════════════╣\n");
    printf("║ No.   ║ Name                         ║ Average     ║\n");
    printf("╠═══════╬══════════════════════════════╬═════════════╣\n");
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (st[i].avr >= 5.50) {
            printf("║ %3d   ║ %-28s ║ %.2f        ║\n", st[i].num, st[i].name, st[i].avr);
            if (i < n-1) {
                printf("╠═══════╬══════════════════════════════╬═════════════╣\n");
            }
            found = 1;
        }
    }
    
    if (!found) {
        printf("║       ║ No students eligible            ║             ║\n");
    }
    
    printf("╚═══════╩══════════════════════════════╩═════════════╝\n");
    printf("\nPress any key to return...");
    getch();
}

void retakeExamStudents(student st[], int n, int m) {
    system("cls");
    printf("\n\n");
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("║       STUDENTS WHO NEED TO RETAKE EXAMS            ║\n");
    printf("╠═══════╦══════════════════════════════╦═════════════╣\n");
    printf("║ No.   ║ Name                         ║ Subject     ║\n");
    printf("╠═══════╬══════════════════════════════╬═════════════╣\n");
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (st[i].marks[j] == 2) {
                printf("║ %3d   ║ %-28s ║ %2d          ║\n", st[i].num, st[i].name, j+1);
                if (i < n-1) {
                    printf("╠═══════╬══════════════════════════════╬═════════════╣\n");
                }
                found = 1;
                break;
            }
        }
    }
    
    if (!found) {
        printf("║       ║ No students need to retake     ║             ║\n");
    }
    
    printf("╚═══════╩══════════════════════════════╩═════════════╝\n");
    printf("\nPress any key to return...");
    getch();
}

void subjectsWithRetake(student st[], int n, int m) {
    system("cls");
    int hasRetake[20] = {0};
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (st[i].marks[j] == 2) {
                hasRetake[j] = 1;
            }
        }
    }
    
    printf("\n\n");
    printf("╔══════════════════════════════════════╗\n");
    printf("║     SUBJECTS WITH RETAKE EXAMS       ║\n");
    printf("╠════════════════╦═════════════════════╣\n");
    printf("║ Subject No.    ║ Status              ║\n");
    printf("╠════════════════╬═════════════════════╣\n");
    
    int found = 0;
    for (int j = 0; j < m; j++) {
        printf("║ %2d             ║ ", j+1);
        if (hasRetake[j]) {
            printf("Retake needed      ║\n");
            found = 1;
        } else {
            printf("No retake needed   ║\n");
        }
        if (j < m-1) {
            printf("╠════════════════╬═════════════════════╣\n");
        }
    }
    
    printf("╚════════════════╩═════════════════════╝\n");
    printf("\nPress any key to return...");
    getch();
}

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
        st[i].avr = 0;
        for (int j=0; j<m; j++){
            do{
                printf("Enter the marks of student %d in subject %d: ", st[i].num, j+1);
                scanf("%d", &st[i].marks[j]);
                if(st[i].marks[j] >= 2 && st[i].marks[j] <= 6) {
                    st[i].avr += st[i].marks[j];
                }
            }while (st[i].marks[j] < 2 || st[i].marks[j] > 6);
        }
        st[i].avr /= m;
    }
    
    displayTable(st, n, m);
    
    int mainOption = 0;
    int sortOption = 0;
    int reportOption = 0;
    int key = 0;

    while (1) {
        system("cls");
        printf("Main Menu:\n");
        
        if (mainOption == 0) {
            printf("> 1. Sorting <\n");
        } else {
            printf("  1. Sorting\n");
        }
        
        if (mainOption == 1) {
            printf("> 2. Reports <\n");
        } else {
            printf("  2. Reports\n");
        }
        
        if (mainOption == 2) {
            printf("> 3. Display Table <\n");
        } else {
            printf("  3. Display Table\n");
        }
        
        if (mainOption == 3) {
            printf("> 4. EXIT <\n");
        } else {
            printf("  4. EXIT\n");
        }
        
        key = getch();
        if (key == 224) {
            key = getch();
            if (key == 72) {
            if (mainOption > 0)
                mainOption = mainOption - 1;
            else
                mainOption = 3;
            } else if (key == 80) {
            if (mainOption < 3)
                mainOption = mainOption + 1;
            else
                mainOption = 0;
            }
        }
        else if (key == 13) {
            if (mainOption == 0) { 
                sortOption = 0;
                while (1) {
                    system("cls");
                    printf("Sorting Menu:\n");
                    
                    if (sortOption == 0) {
                        printf("> 1. Sort by Number <\n");
                    } else {
                        printf("  1. Sort by Number\n");
                    }
                    
                    if (sortOption == 1) {
                        printf("> 2. Sort by Name <\n");
                    } else {
                        printf("  2. Sort by Name\n");
                    }
                    
                    if (sortOption == 2) {
                        printf("> 3. Sort by Average <\n");
                    } else {
                        printf("  3. Sort by Average\n");
                    }
                    
                    if (sortOption == 3) {
                        printf("> 4. Back to Main Menu <\n");
                    } else {
                        printf("  4. Back to Main Menu\n");
                    }
                    
                    key = getch();
                    if (key == 224) {
                        key = getch();
                        if (key == 72) {
                            if (mainOption > 0)
                                mainOption = mainOption - 1;
                            else
                                mainOption = 3;
                        } else if (key == 80) {
                            if (mainOption < 3)
                                mainOption = mainOption + 1;
                            else
                                mainOption = 0;
                        }
                    }
                    else if (key == 13) {
                        if (sortOption == 0) {
                            sortByNumber(st, n);
                            displayTable(st, n, m);
                        } else if (sortOption == 1) {
                            sortByName(st, n);
                            displayTable(st, n, m);
                        } else if (sortOption == 2) {
                            sortByAverage(st, n);
                            displayTable(st, n, m);
                        } else if (sortOption == 3) {
                            break;
                        }
                    }
                }
            } else if (mainOption == 1) { 
                reportOption = 0;
                while (1) {
                    system("cls");
                    printf("Reports Menu:\n");
                    
                    if (reportOption == 0) {
                        printf("> 1. Students eligible for scholarship\n");
                    } else {
                        printf("  1. Students eligible for scholarship\n");
                    }
                    
                    if (reportOption == 1) {
                        printf("> 2. Students who need to retake exams\n");
                    } else {
                        printf("  2. Students who need to retake exams\n");
                    }
                    
                    if (reportOption == 2) {
                        printf("> 3. Subjects with retake exams\n");
                    } else {
                        printf("  3. Subjects with retake exams\n");
                    }
                    
                    if (reportOption == 3) {
                        printf("> 4. Back to Main Menu\n");
                    } else {
                        printf("  4. Back to Main Menu\n");
                    }
                    
                    key = getch();
                    if (key == 224) {
                        key = getch();
                        if (key == 72) {
                            reportOption = (reportOption > 0) ? reportOption - 1 : 3;
                        } else if (key == 80) {
                            reportOption = (reportOption < 3) ? reportOption + 1 : 0;
                        }
                    } else if (key == 13) {
                        if (reportOption == 0) {
                            scholarshipStudents(st, n);
                        } else if (reportOption == 1) {
                            retakeExamStudents(st, n, m);
                        } else if (reportOption == 2) {
                            subjectsWithRetake(st, n, m);
                        } else if (reportOption == 3) {
                            break;
                        }
                    }
                }
            } else if (mainOption == 2) {
                displayTable(st, n, m);
            } else if (mainOption == 3) {
                system("cls");
                printf("Exiting program. Hasta la vista!\n");
                break;
            }
        }
    }
}