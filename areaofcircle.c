#include <stdio.h>

void areaOfCircle(float r){
float area = 3.14*(r*r);
printf("Circle with radius of %f units has area of %f units squared\n", r, area);
}

int main(void) {
  for (float x=3.5;x<=12.5;x++){
      areaofcircle(x);
  }
return 0;
}
