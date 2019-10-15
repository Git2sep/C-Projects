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
