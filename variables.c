#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int d;

  a = 2;
  c = a + b;
  d = c;
  c = a;
  a = d;
  printf("Sum of %d and %d is %d\n", a, b, c);
}
