#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * Print , date of birth, and mobile number
  */
int main() {

  char *str;
  int length = 50, i = 0;

  str = (char*)malloc(length);

  printf("Enter a string to be reversed: ");
  fgets(str, length, stdin);
  if (str[strlen(str)- 1] == '\n') str[strlen(str) - 1] = '\0';

  printf("\nReversed\t:");
  for (i = 0; i < strlen(str); i++) {
    printf("%c", str[strlen(str)-i-1]);
  }
  printf("\n");

  free(str);
  return 0;
}
