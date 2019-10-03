#include <stdio.h>

char max_consecutive_1s(unsigned short x)
{
  int short_size = sizeof(short) * 8, i, max = 0, current = 0;
  for (i = 0; i < short_size; i++) {
      //Check if left-most is 1
      if(x & 0x8000) {
        current++;
      //Reset current count
      } else {
        current = 0;
      }
      //Update max if current count is greater than max
      if(current > max) {
        max = current;
      }
      //Shift left one
      x <<= 1;
  }
  return max;
}



void main()
{
    printf("%d\n", max_consecutive_1s(0b1111111111110000));
}
