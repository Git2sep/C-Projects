#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
  * Print , date of birth, and mobile number
  */
int main() {

  float radius;
  int i = 0;
  char buffer[20];

  printf("Enter the radius of the circle: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%f", &radius);

  printf("Perimeter: %f\n", 2 * M_PI * radius);
  printf("Area: %f\n", M_PI * radius * radius);
  return 0;
}
