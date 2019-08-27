#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * Print , date of birth, and mobile number
  */
int main() {

  int length, width;
  int i = 0;
  char buffer[20];

  printf("Enter the length of the rectangle: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d", &length);
  printf("Enter the width of the rectangle: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d", &width);

  printf("Perimeter: %d\n", (2 * length) + (2 * width));
  printf("Area: %d\n", length * width);
  return 0;
}
