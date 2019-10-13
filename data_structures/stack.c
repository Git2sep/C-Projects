#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

//Stack data structure
struct stack
{
  int max_size;
  int top;
  int* items;
};

int main()
{
  int size, top = -1;
  char buffer[2];
  char user_in;

  //Init the stack
  printf("Welcome to creating a stack in C!\n");
  size = init();
  int stack[size];

  //Main part of the program
  printf("\n(1) Push\n(2) Pop\n(3) Display\n(q) Quit\n");
  printf("Enter a number(1-3): ");
  user_in = getchar();
  while(user_in != 'q')
  {
    //Execute choice
    switch(user_in)
    {
      case '1':
        push();
        break;
      case '2':
        pop();
        break;
      case '3':
        display();
        break;
    }

    //Clear stdin and ask until user quits
    while ((getchar()) != '\n');
    printf("\n(1) Push\n(2) Pop\n(3) Display\n(q) Quit\n");
    printf("Enter a number(1-3): ");
    user_in = getchar();
  }

  return 0;
}

int init()
{
  char size_buffer[4];
  int size;

  printf("Please enter a size of the stack(Max 999): ");
  fgets(size_buffer, sizeof(size_buffer), stdin);
  sscanf(size_buffer, "%d", &size);
  printf("Stack size is: %d\n", size);
}

void push()
{

}

void pop()
{

}

void display()
{

}
