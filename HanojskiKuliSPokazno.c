#include <stdio.h>
#include <stdlib.h>
unsigned char tomtom = 219;

// Number of disks & move counter
int numDisks, moveCount = 0;
int *towerA, *towerB, *towerC;

// Delay function for smooth animation
void delay() {
    for (volatile long i = 0; i < 90000000; i++);
}

// Clears only the tower visualization while keeping instructions
void clearScreen() {
    //system("cls");  // Use "clear" for Linux/Mac
    printf("==== TOWER OF HANOI SIMULATION ====\n");
    printf("Move Count: %d\n", moveCount);
    printf("-----------------------------------\n");
}

// Prints a disk using different symbols
void printDisk(int size, int maxWidth) {
    int space = (maxWidth - size * 2 + 1) / 2;

    printf("%*s", space, ""); // Left padding

    for (int i = 0; i < size * 2 - 1; i++) {
        printf("%c", tomtom); // Solid block for disk
    }

    printf("%*s", space, ""); // Right padding
}

// Prints the current state of the towers
void printTowers() {
    int maxWidth = numDisks * 2 - 1;

    for (int i = numDisks - 1; i >= 0; i--) {
        printf("   ");

        int diskA = towerA[i];
        if (diskA) {
            printDisk(diskA, maxWidth);
        } else {
            printf("%*s|%*s", maxWidth / 2, "", maxWidth / 2, "");
        }

        printf("   ");

        int diskB = towerB[i];
        if (diskB) {
            printDisk(diskB, maxWidth);
        } else {
            printf("%*s|%*s", maxWidth / 2, "", maxWidth / 2, "");
        }

        printf("   ");

        int diskC = towerC[i];
        if (diskC) {
            printDisk(diskC, maxWidth);
        } else {
            printf("%*s|%*s", maxWidth / 2, "", maxWidth / 2, "");
        }

        printf("\n");
    }
    printf("-----------------------------\n");
    printf("      A         B         C\n");
}

// Moves a disk between towers with animation
void moveDisk(int disk, int *fromTower, int *toTower, char from, char to) {
    moveCount++;
    clearScreen();
    printf("Moving disk %d from %c to %c...\n\n", disk, from, to);

    // Remove disk from source tower
    for (int i = numDisks - 1; i >= 0; i--) {
        if (fromTower[i] == disk) {
            fromTower[i] = 0;
            break;
        }
    }

    printTowers();
    delay();

    // Place disk on destination tower
    for (int i = 0; i < numDisks; i++) {
        if (toTower[i] == 0) {
            toTower[i] = disk;
            break;
        }
    }

    printTowers();
    delay();
}

// Recursive function to solve Tower of Hanoi
void hanoi(int n, int *fromTower, int *auxTower, int *toTower, char from, char aux, char to) {
    if (n == 0) return;

    hanoi(n - 1, fromTower, toTower, auxTower, from, to, aux);
    moveDisk(n, fromTower, toTower, from, to);
    hanoi(n - 1, auxTower, fromTower, toTower, aux, from, to);
}

int main() {
    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    // Allocate memory dynamically for towers
    towerA = (int *)malloc(numDisks * sizeof(int));
    towerB = (int *)malloc(numDisks * sizeof(int));
    towerC = (int *)malloc(numDisks * sizeof(int));

    // Initialize starting tower (A) with disks
    for (int i = 0; i < numDisks; i++) {
        towerA[i] = numDisks - i;  // Largest disk at the bottom
        towerB[i] = 0;
        towerC[i] = 0;
    }

    clearScreen();
    printTowers();
    hanoi(numDisks, towerA, towerB, towerC, 'A', 'B', 'C');

    printf("\nAll disks have been moved successfully!\n");
    printf("Total Moves: %d\n", moveCount);

    // Free allocated memory
    free(towerA);
    free(towerB);
    free(towerC);

    return 0;
}
