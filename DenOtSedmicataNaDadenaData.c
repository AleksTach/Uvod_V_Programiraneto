#include <stdio.h>
void main() {
    int d, m, y, brd, vis, total_days = 0, i, day_of_week;
    do {
        printf("day= ");
        scanf("%d", &d);
        printf("month= ");
        scanf("%d", &m);
        printf("year= ");
        scanf("%d", &y);
        if ((y%4==0&&y%100!=0)||(y%400==0))
            vis = 1;
        else
            vis = 0;
        switch (m) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                brd = 31;
                break;
            case 4: case 6: case 9: case 11:
                brd = 30;
                break;
            case 2:
                brd = 28 + vis;
                break;
            default:
                brd = 0;
        }
    } while (y<0||m<1||m>12||d<1||d>brd);
    if (y>=2024) {
        for (i=2024; i<y; i++) {
            if (i%4==0&&(i%100!=0||i%400==0)) {
                total_days+= 366;
            } else {
                total_days+= 365;
            }
        }
    } else {
        for (i=2023; i>=y; i--) {
            if (i%4==0&&(i%100!=0||i%400==0)) {
                total_days -= 366;
            } else {
                total_days -= 365;
            }
        }
    }
    for (i=1; i<m; i++) {
        switch (i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                total_days += 31;
                break;
            case 4: case 6: case 9: case 11:
                total_days += 30;
                break;
            case 2:
                total_days += 28 + vis;
                break;
        }
    }
    total_days+=d-1;
    day_of_week=(total_days%7+7)%7;
    printf("The date %d/%d/%d is ", d, m, y);
    switch (day_of_week) {
        case 0: printf("Monday.\n"); break;
        case 1: printf("Tuesday.\n"); break;
        case 2: printf("Wednesday.\n"); break;
        case 3: printf("Thursday.\n"); break;
        case 4: printf("Friday.\n"); break;
        case 5: printf("Saturday.\n"); break;
        case 6: printf("Sunday.\n"); break;
    }
}
