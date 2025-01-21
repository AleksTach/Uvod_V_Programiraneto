#include <stdio.h>
#include <conio.h>

void clearscreen() {
    system("cls");
}

void main() {
    int selectedOption = 0;
    char key;
    while (1) {
        clearscreen();

        if (selectedOption == 0)
            printf("> Option 1\n");
        else
            printf("  Option 1\n");

        if (selectedOption == 1)
            printf("> Option 2\n");
        else
            printf("  Option 2\n");

        if (selectedOption == 2)
            printf("> Option 3\n");
        else
            printf("  Option 3\n");

        if (selectedOption == 3)
            printf("> Exit\n");
        else
            printf("  Exit\n");

        key = getche();

        if (key == 72) {
            selectedOption = (selectedOption + 3) % 4;
        } else if (key == 80) {
            selectedOption = (selectedOption + 1) % 4;
        } else if (key == '\r') {
            if (selectedOption == 3) break;
            clearscreen();
            if (selectedOption == 0) {
                printf("You selected: Option 1\n");
            } else if (selectedOption == 1) {
                printf("You selected: Option 2\n");
            } else if (selectedOption == 2) {
                printf("You selected: Option 3\n");
            }
            getch();
        }
    }
}
