#include <stdio.h>
int main()
{
  int n, i, a;
  float u, avr=0;
  do{
    printf("number students= ");
    scanf("%d", &n);
  }
  while (n<1);
  for(i=1, u=0; n>=i; i++){
    do{
        printf("grade= ");
        scanf("%d", &a);
    }
    while ((a<2)||(a>6));
    u+=a;
  }
  avr=u/n;
  printf("Overall grade= %5.2f", avr);
  return 0;
}
