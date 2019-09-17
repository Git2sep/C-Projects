// Append strt2 to str1
void my_strcat(char* str1, char* str2)
{
    int i, j;
    //Move str1 pos to the end
    while(*str1 != '\0') {
      str1++;
    }
    //Start appending to the end of str1
    while (*str2 != '\0') {
      *str1 = *str2;
      str1++;
      str2++;
    }
    //End append with null terminator
    *str1 = '\0';
}


// example of using my_strcat()
#include <stdio.h>

int main(void)
{

  char my_str1[50] = "hello ";
  char my_str2[] = "world";

  my_strcat(my_str1, my_str2);

  // Printf should print: hello world.
  printf("%s \n", my_str1);

}
