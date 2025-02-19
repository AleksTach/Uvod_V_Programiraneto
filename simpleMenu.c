#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void clearscreen()
{
    system("cls");
}

void main() {
    int selectedOption = 0;
    unsigned char button;
    while (1) {
        clearscreen();

        if (selectedOption == 0)
            printf("-> Option 1\n");
        else
            printf("  Option 1\n");

        if (selectedOption == 1)
            printf("-> Option 2\n");
        else
            printf("  Option 2\n");

        if (selectedOption == 2)
            printf("-> Option 3\n");
        else
            printf("  Option 3\n");
        if (selectedOption == 3)
            printf("-> Option 4\n");
        else
            printf("  Option 4\n");

        if (selectedOption == 4)
            printf("-> Exit\n");
        else
            printf("  Exit\n");

        button = getch();

        if (button == 72) {
            selectedOption = (selectedOption + 4) % 5;
        } else if (button == 80) {
            selectedOption = (selectedOption + 1) % 5;
        } else if (button == '\r') {
            if (selectedOption == 4) break;
            clearscreen();
            switch (selectedOption){
                case 0: printf("You selected: Option 1"); break;
                case 1: printf("You selected: Option 2"); break;
                case 2: printf("You selected: Option 3"); break;
                case 3: printf("You selected: Option 4"); break;
            }
            getch();
        }
    }
}
