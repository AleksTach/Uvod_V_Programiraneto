#include <stdio.h>
#include <stdlib.h>

void printMove(int disk, char from, char to) {
    printf("Moving disk %d from %c to %c\n", disk, from, to);
    for (volatile long i = 0; i < 100000000; i++);
}

void hanoi(int n, char from, char aux, char to) {
    if (n == 1) {
        printMove(1, from, to);
        return;
    }
    hanoi(n - 1, from, to, aux);
    printMove(n, from, to);
    hanoi(n - 1, aux, from, to);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("\n");
    hanoi(n, 'A', 'B', 'C');
    printf("All disks have been moved successfully!\n");
    return 0;
}
