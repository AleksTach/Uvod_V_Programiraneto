#include <stdio.h>
int main()
{
    float a, b, x;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    if (a==0){
        if(b==0)
            printf("Every X is an answer");
        else
            printf("No solution");
    }
    else{
        x=-b/a;
        printf("X= %.2f", x);
    }
    return 0;
}
