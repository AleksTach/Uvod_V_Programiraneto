#include <stdio.h>

void main()
{
    int d, m, g, pd = 0, i;
    do
    {
    printf("day:  ");
    scanf("%d", &d);
    }
    while ((d < 1)||(d > 31));
        do
    {
        printf("month: ");
        scanf("%d", &m);
    }
    while ((m < 1)||(m > 12));
    do{
    printf("year:  ");
    scanf("%d", &g);
    }
    while(g<1);
    if ((m == 2)&&((d == 30)||(d == 31)))
    {
        printf("February isn't that long. Enter new day of the month: ");
        scanf("%d", &d);
    }
    if (((m == 4)||(m == 6)||(m == 9)||(m == 11))&&(d == 31))
    {
        printf("This month isn't that long. Enter new day of the month: ");
        scanf("%d", &d);
    }
    if (((g % 4 == 0) && (g % 100 != 0)) || ((g % 100 == 0) && (g % 400 == 0)))
    {
        for (i = 1; i < m ; i++)
        {
            if((i == 1)||(i == 3)||(i == 5)||(i == 7)||(i == 8)||(i == 10)||(i == 12)) pd += 31;
            if (i == 2) pd += 29;
            if ((i == 4)||(i == 6)||(i == 9)||(i == 11)) pd += 30;
        }
        pd = pd + d;
    }

    else
    {
        if ((m == 2)&&(d == 29))
        {
            printf("Enter a new day of the month: ");
            scanf("%d", &d);
        }
        for (i = 1; i < m; i++)
        {
            if((i == 1)||(i == 3)||(i == 5)||(i == 7)||(i == 8)||(i == 10)||(i == 12)) pd += 31;
            if (i == 2) pd += 28;
            if ((i == 4)||(i == 6)||(i == 9)||(i == 11)) pd += 30;
        }
        pd = pd + d;
    }

     printf("It's the %d of the year.\n\n\n", pd);
}
