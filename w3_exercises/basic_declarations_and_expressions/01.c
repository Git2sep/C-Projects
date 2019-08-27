#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * Print name, date of birth, and mobile number
  */
int main() {

  char *name, *dob, *phone;
  int length = 50;

  name = (char*)malloc(length);
  dob = (char*)malloc(length);
  phone = (char*)malloc(length);

  printf("Enter your full name: ");
  fgets(name, length, stdin);
  if (name[strlen(name)- 1] == '\n') name[strlen(name) - 1] = '\0';
  printf("Enter your date of birth: ");
  fgets(dob, length, stdin);
  if (dob[strlen(dob)- 1] == '\n') dob[strlen(dob) - 1] = '\0';
  printf("Enter your phone number: ");
  fgets(phone, length, stdin);
  if (phone[strlen(phone)- 1] == '\n') phone[strlen(phone) - 1] = '\0';

  printf("\nName\t: %s\n", name);
  printf("DOB\t: %s\n", dob);
  printf("Mobile\t: %s\n", phone);

  free(name);
  free(dob);
  free(phone);
  return 0;
}
