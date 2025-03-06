#include <stdio.h>
#define max_br 100

void main()
{
    int n;
    float temp[max_br], srednaTemperatura = 0;
    do{
        printf("n= ");
        scanf("%d", &n);
    } while(n < 1 || n > 100);
    printf("Write the tempretures for %d days:\n", n);
    for(int i = 0; i < n; i++)
    {
        printf("Tempreture for day [%d] = ", i);
        scanf("%f", &temp[i]);
    }
    srednaTemperatura = 0;
    for(int i = 0; i < n; i++)
    {
        srednaTemperatura += temp[i];
    }
    srednaTemperatura = srednaTemperatura/n;
    printf("Avrg. tempreture is %.2f\n", srednaTemperatura);
    for (int i = 0; i < n; i++)
    {
        printf("otklonenie[%d] = %.2f\n", i, temp[i]-srednaTemperatura);
    }

}