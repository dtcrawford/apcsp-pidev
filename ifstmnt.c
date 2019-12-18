#include <stdio.h>

int main()
{
  int a = 0;
  int b = 2;
  int c = 4;
  int d = 6;
  int e = 2;
  int f = 1;
  // if statement to test is a is equal to 0
  if (a == b)
  {
    printf("a is equal to b\n");
  }
  else
  {
    printf("a is not equal to b\n");
  }
  if (a != c)
  {
    printf("a is not equal to c\n");
  }
else
  {
    printf("a is equal c\n");
  }
  if (a > d)
  {
    printf("a is greater then d\n");
  }
else
  {
    printf("a is not greater then d\n");
  }

  if (a >= f)
  {
    printf("a is greater then or equal to f\n");
  }
  else
  {
    printf("a is not greater then or equal to f\n");
  }
  if (a == d && b == e)
  {
    printf("a is equal to d and b is equal to e\n");
  }
 else
  {
    printf("a is not equal to d and b is not equal to e\n");
  }
  if (a == c || b == e)
  {
    printf("a is equal to c or b is equal to e\n");
  }
  else
  {
    printf("a is not equal to c or b isequal to e\n");
  }
  if (!(a == d))
  {
    printf("a is not equal to d\n");
  }
  else
  {
    printf("a is not 0\n");
  }
}
