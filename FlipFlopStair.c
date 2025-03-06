#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y);
void Flip(int n, int x, int y);
void Flop(int n, int x, int y);

int main()
{
    int n;
    printf("n= ");
    scanf("%d", &n);
    Flip(n, 1, 2);
    return 0;
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Flip(int n, int x, int y)
{
    if (n == 0) return;

    gotoxy(x, y);
    printf("|");
    gotoxy(x + 1, y);
    printf("_");
    Flip(n - 1, x + 2, y + 1);
}
