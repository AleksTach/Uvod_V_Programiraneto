#include <stdio.h>

void main()
{
    unsigned  char operat;
    float chs, dst;
    printf("Simple Calculator.\n");
    scanf("%f", &dst);
        while (1)
        {
       do
        {
            scanf("%c", &operat);
        }
        while(operat != '+' && operat != '-' && operat != '/' && operat != '*' && operat != '=');
        if (operat == '=') break;
        scanf("%f", &chs);
        switch (operat)
        {
            case '+': dst += chs; break;
            case '-': dst -= chs; break;
            case '/':
                while (chs == 0)
                {
                printf("Ne se deli na 0!!!");
                return ;
                }
                dst /= chs;
                break;

            case '*': dst *= chs; break;
        }
        }
    printf("The answer is: %.3f", dst);
}
