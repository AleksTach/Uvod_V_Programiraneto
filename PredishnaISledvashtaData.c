#include <stdio.h>
void main()
{
    int d, m, y, prd, prm, pry, sld, slm, sly, brd, vis;
    do{
    printf("day= ");
    scanf("%d", &d);
    printf("month= ");
    scanf("%d", &m);
    printf("year= ");
    scanf("%d", &y);
    if ((y%4==0)&&(y%100!=0))
        vis=1;
    else
        vis=0;
    if ((y%100==0)&&(y%400==0))
        vis=1;
    else
        vis=0;

    switch (m)
    {
        case 1:case 3: case 5: case 7: case 8: case 10: case 12: brd= 31; break;
        case 4: case 6: case 9: case 11: brd=30; break;
        case 2: brd=28+vis; break;
    }
    }while (y<0||m<1||m>12||d<1||d>brd);
     prd = d - 1;
    prm = m;
    pry = y;
    if (prd < 1)
    {
        prm-=1;
        if (prm<1)
        {
            prm=12;
            pry-=1;
        }
        switch(prm){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                brd = 31; break;
            case 4: case 6: case 9: case 11:
                brd = 30; break;
            case 2:
                brd = 28 + ((pry%4==0 && pry%100!=0) || (pry%400==0)); break;
        }
        prd = brd;
    }
    sld = d + 1;
    slm = m;
    if (slm==2&&sld==28)
        sld=sld+vis;
    sly = y;
    if (sld > brd){
        sld = 1;
        slm += 1;
        if (slm > 12){
            slm = 1;
            sly += 1;
        }
    }
    printf("Previous date: %d/%d/%d\n", prd, prm, pry);
    printf("Next date: %d/%d/%d\n", sld, slm, sly);
}
