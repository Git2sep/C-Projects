#include <stdio.h>

void main()
{
  int a = 5;
int b = 10;
int *c_ptr = 0;

  c_ptr = &b;
  a = *c_ptr + b;
  (*c_ptr)++;
  c_ptr++;	

  printf("a is %d, b is %d, c is %d\n", a, b, *c_ptr);
}
