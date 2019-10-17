#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/**
  * This is an interactive terminal program that allows the user
  * to create and manipulate a stack.
  *
  * Author: Thomas Haddy 10/15/19
  */
int main()
{
  Stack* stack;
  int max_size, to_add, to_remove;
  char size_buffer[4], to_add_buffer[8];
  char user_in;

  //Init the stack
  printf("Welcome to creating a stack in C!\n");
  printf("Please enter a size of the stack(Integer between 1-999): ");
  fgets(size_buffer, sizeof(size_buffer), stdin);
  sscanf(size_buffer, "%d", &max_size);
  if (max_size <= 0)
  {
    fprintf(stderr, "Not a valid size! Must be between 1 and 999. Exiting...\n");
    return 1;
  }
  stack = init_stack(max_size);

  //Ask user how they want to manipulate the stack
  printf("\n(1) Push\n(2) Pop\n(3) Display\n(q) Quit\n");
  printf("Enter a number(1-3): ");
  user_in = getchar();
  while(user_in != 'q')
  {
    fflush(stdin);
    //Execute choice
    switch(user_in)
    {
      case '1':
        printf("Enter the number you would like to add (int): ");
        scanf("%d", &to_add);
        if (push(stack, to_add) == -1)
        {
          printf("The stack is full!\n");
        }
        else
        {
          printf("Pushed %d on the stack\n", stack->items[stack->top]);
        }
        break;
      case '2':
        to_remove = pop(stack);
        if (to_remove == -1)
        {
          printf("The stack is empty! Unable to pop\n");
        }
        else
        {
          printf("Popped %d off the stack\n", to_remove);
        }
        break;
      case '3':
        display(stack);
        break;
    }

    //Clear stdin
    while ((getchar()) != '\n');
    //Ask again until 'q' is pressed
    printf("\n(1) Push\n(2) Pop\n(3) Display\n(q) Quit\n");
    printf("Enter a number(1-3): ");
    user_in = getchar();
  }

  //Free allocated memory
  free(stack->items);
  free(stack);
  return 0;
}
