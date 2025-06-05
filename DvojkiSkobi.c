#include <stdio.h>
#include <string.h>
#define MAX 250

int is_open(char c) {
    return c == '(' || c == '[' || c == '{';
}

int is_close(char c) {
    return c == ')' || c == ']' || c == '}';
}

int matches(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

void sort_info(int info[MAX][3], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (info[i][0] > info[j][0]) {
                int tmp0 = info[i][0], tmp1 = info[i][1], tmp2 = info[i][2];
                info[i][0] = info[j][0];
                info[i][1] = info[j][1];
                info[i][2] = info[j][2];
                info[j][0] = tmp0;
                info[j][1] = tmp1;
                info[j][2] = tmp2;
            }
        }
    }
}

void main()
{
    char s[MAX];
    int stack[MAX], stack_top = -1;
    int pair_count = 0;
    int info[MAX][3];
    int info_len = 0;

    printf("Enter string with brackets: ");
    fgets(s, MAX, stdin);

    int len = strlen(s);
    if (s[len-1] == '\n') s[len-1] = '\0';

    for (int i = 0; s[i]; i++) {
        if (is_open(s[i])) {
            stack[++stack_top] = info_len;
            info[info_len][0] = i + 1;
            info[info_len][1] = s[i];
            info[info_len][2] = 0;
            info_len++;
        } else if (is_close(s[i])) {
            info[info_len][0] = i + 1;
            info[info_len][1] = s[i];
            info[info_len][2] = 0;
            if (stack_top >= 0 && matches(info[stack[stack_top]][1], s[i])) {
                pair_count++;
                int open_pos = stack[stack_top--];
                info[open_pos][2] = pair_count;
                info[info_len][2] = pair_count;
            } else {
                info[info_len][2] = -1;
            }
            info_len++;
        }
    }
    while (stack_top >= 0) {
        int open_pos = stack[stack_top--];
        info[open_pos][2] = -1;
    }

    sort_info(info, info_len);

    printf("\nIndex\tChar\tPairNum\n");
    for (int i = 0; i < info_len; i++) {
        printf("%d\t%c\t", info[i][0], info[i][1]);
        if (info[i][2] > 0)
            printf("%d\n", info[i][2]);
        else
            printf("Unmatched\n");
    }

    printf("\nSorted brackets: ");
    for (int i = 0; i < info_len; i++) {
        printf("%c", info[i][1]);
    }
    printf("\n");
}