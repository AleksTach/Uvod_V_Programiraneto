#include <stdio.h>

void main()
{
    float temp[10], srednaTemperatura, suma;
    printf("Vuvedete temperaturite za 10 dni:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("temp[%d] = ", i);
        scanf("%f", &temp[i]);
    }
    srednaTemperatura = 0;
    for(int i = 0; i < 10; i++)
    {
        srednaTemperatura += temp[i];
    }
    srednaTemperatura = srednaTemperatura/10;
    printf("Srednata temperatura e %.2f\n", srednaTemperatura);
    for (int i = 0; i < 10; i++)
    {
        printf("temp[%d] = %.2f\n", i, temp[i]-srednaTemperatura);
    }

}