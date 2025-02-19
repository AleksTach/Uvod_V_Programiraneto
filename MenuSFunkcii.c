#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void clearscreen() {
    system("cls");
}

int Sreshta(int n, int c);
int Br(int n, int a);
int s_sum(int n);
int s_digits(int n);
int s_digits_sum(int n);
int em_even(int n);
int em_reverse(int n);

void option1();
void option2();
void option3();
void option4();
void option5();
void option6();
void option7();

void main() {
    int selectedOption = 0;
    unsigned char button;

    while (1) {
        clearscreen();
        if (selectedOption == 0) printf("-> Check if a digit appears more than once\n");
        else printf("   Check if a digit appears more than once\n");

        if (selectedOption == 1) printf("-> Count occurrences of a digit\n");
        else printf("   Count occurrences of a digit\n");

        if (selectedOption == 2) printf("-> Sum of numbers from 1 to n\n");
        else printf("   Sum of numbers from 1 to n\n");

        if (selectedOption == 3) printf("-> Count digits in number\n");
        else printf("   Count digits in number\n");

        if (selectedOption == 4) printf("-> Sum of digits of a number\n");
        else printf("   Sum of digits of a number\n");

        if (selectedOption == 5) printf("-> Extract even digits\n");
        else printf("   Extract even digits\n");

        if (selectedOption == 6) printf("-> Reverse the number\n");
        else printf("   Reverse the number\n");

        if (selectedOption == 7) printf("-> Exit\n");
        else printf("   Exit\n");

        button = getch();

        if (button == 72) {
            selectedOption = (selectedOption + 7) % 8;
        } else if (button == 80) {
            selectedOption = (selectedOption + 1) % 8;
        } else if (button == '\r') {
            if (selectedOption == 7) break;
            clearscreen();
            switch (selectedOption) {
                case 0: option1(); break;
                case 1: option2(); break;
                case 2: option3(); break;
                case 3: option4(); break;
                case 4: option5(); break;
                case 5: option6(); break;
                case 6: option7(); break;
            }
            getch();
        }
    }
}

void option1() {
    int n, c;
    printf("n= ");
    scanf("%d", &n);
    printf("c= ");
    scanf("%d", &c);
    if (Sreshta(n, c))
        printf("Digit appears");
    else
        printf("Digit doesn't appear");
}

int Sreshta(int n, int c) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == c) count++;
        n /= 10;
    }
    return count > 1;
}

void option2() {
    int n, a;
    printf("n= ");
    scanf("%d", &n);
    printf("a= ");
    scanf("%d", &a);
    printf("Count occurrences %d times", Br(n, a));
}

int Br(int n, int a) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == a) count++;
        n /= 10;
    }
    return count;
}

void option3() {
    int n;
    printf("n= ");
    scanf("%d", &n);
    printf("sum= %d", s_sum(n));
}

int s_sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

void option4() {
    int n;
    printf("n= ");
    scanf("%d", &n);
    printf("Digits count= %d", s_digits(n));
}

int s_digits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

void option5() {
    int n;
    printf("n= ");
    scanf("%d", &n);
    printf("sum= %d", s_digits_sum(n));
}

int s_digits_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void option6() {
    int n;
    printf("n= ");
    scanf("%d", &n);
    int m = em_even(n);
    if (m == 0)
        printf("No even numbers");
    else
        printf("M= %d", m);
}

int em_even(int n) {
    int m = 0, c = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            m += c * digit;
            c *= 10;
        }
        n /= 10;
    }
    return m;
}

void option7() {
    int n;
    printf("n= ");
    scanf("%d", &n);
    printf("M= %d", em_reverse(n));
}

int em_reverse(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}

