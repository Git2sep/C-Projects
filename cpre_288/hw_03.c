#include <stdio.h>

void main()
{
  unsigned char ch;
  unsigned short n;

  n = 0b0110000001110000;

  if ( !(n & 0x6000 ^ 0x6000) && !(n & 0x0888) && n & 0x0070 && n & 0x8001 ^ 0x8001 )
    printf("%x\n", n);
}
