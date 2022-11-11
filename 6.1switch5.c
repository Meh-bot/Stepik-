#include <stdio.h>
#include <math.h>
int main()
{
  float a, b;
  char n;
  scanf("%c",&n);
  scanf("%f %f", &a, &b);
  switch(n)
  {
    case '+':
      printf("%.2f ", a+b);
      break;
     case '-':
      printf("%.2f" ,a-b);
      break;
    case '*':
       printf("%.2f" ,a*b);
       break;
    case '/':
       printf("%.2f" ,a/b);
       break;
    default:
      printf(" ERROR!");
  }
  return 0;
}

