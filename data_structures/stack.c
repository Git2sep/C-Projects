#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

struct Stack* init_stack(unsigned int max_size)
{
  struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
  stack->max_size = max_size;
  stack->top = -1;
  stack->items = (int*)malloc(stack->max_size * sizeof(int));
  return stack;
}

int is_full(struct Stack* stack)
{
    return stack->top == stack->max_size - 1;
}

int is_empty(struct Stack* stack)
{
  return stack->top == -1;
}

int push(struct Stack* stack, int to_add)
{
  if (is_full(stack))
  {
    printf("The stack is full!\n");
    return -1;
  }
  stack->top++;
  stack->items[stack->top] = to_add;
  return to_add;
}

int pop(struct Stack* stack)
{
  if (is_empty(stack))
  {
    printf("The stack is empty! Unable to pop\n");
    return -1;
  }
  int to_remove = stack->items[stack->top];
  stack->top--;
  return to_remove;
}

void display(struct Stack* stack)
{
  int i, cur = stack->top;
  for (int i = stack->top; i >= 0; i--)
  {
    if (i == stack->top)
    {
      printf("\n\t%d\t<--- TOP\n", stack->items[i]);
    }
    else
    {
      printf("\t%d\n", stack->items[i]);
    }
  }
  printf("\n");
}

int main()
{
  struct Stack* stack;
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
        push(stack, to_add);
        break;
      case '2':
        to_remove = pop(stack);
        if (to_remove != -1)
        {
          printf("The stack popped off %d\n", to_remove);
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
