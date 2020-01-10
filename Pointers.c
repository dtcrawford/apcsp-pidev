#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 2.5;
  float e = 5.5;
  printf("D = %f, address:%d.\n", d, &d);
  printf("E = %f, address:%d.\n", e, &e);
  float* pd = &d;
  float* pe = &e;
  float temp = 0;

  temp = *pd;
  *pd = *pe;
  *pe = temp;
  printf("D = %f, E = %f\n", *pd, *pe);
}
