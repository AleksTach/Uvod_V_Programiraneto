#include <stdio.h>
int main()
{
    float a, b, x;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    if (a==0){
        if (b>0)
            printf("Every X is an answer");
        else
            printf("No solution");
    }
    else{
        if(a>0)
            printf("x>-%.2f/%.2f", b, a);
        else
            printf("x<-%.2f/%.2f", b, a);
    }
    return 0;
}
