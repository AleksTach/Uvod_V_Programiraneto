#include <stdio.h>
void main()
{
    float c1, c2;
    unsigned char op;

    printf("|");
    scanf("%f", &c1);
    while (1){
        do {
            scanf("%c", &op);
        } while (op!='+' && op!='-' && op!='*' && op!='/' && op!='=');
        if (op=='=') break;
        printf("|");
        scanf("%f", &c2);
        switch(op){
            case '+': c1=c1+c2; break;
            case '-': c1=c1-c2; break;
            case '*': c1=c1*c2; break;
            case '/':{
            while (c2==0){
                printf("Not valid");
                return;
            }
            while (c2!=0){
                c1=c1/c2;
                break;
            }
            }
        }
    }
    printf("%.2f", c1);
}
