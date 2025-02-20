#include <stdio.h>

void pm(int disk, char ot, char kum);
void h(int n, char ot, char mezd, char kum);

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("\n");
    h(n, 'A', 'B', 'C');
    printf("All disks have been moved successfully!\n");
    return 0;
}

void h(int n, char ot, char mezd, char kum)
{
    if (n == 1) {
        pm(1, ot, kum);
        return;
    }
    h(n - 1, ot, kum, mezd);
    pm(n, ot, kum);
    h(n - 1, mezd, ot, kum);
}

void pm(int disk, char ot, char kum)
{
    printf("Moving disk %d from %c to %c\n", disk, ot, kum);
    for (int i = 0; i < 100000000; i++);
}
