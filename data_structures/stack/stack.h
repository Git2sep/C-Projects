#ifndef STACK_H_
#define STACK_H_

/**
  * Stack struct elements:
  *   max_size: Max size of the struct
  *   top: current index of the stack
  *   items: array of items represented as a stack
  */
struct Stack {
    int top;
    unsigned int max_size;
    int* items;
};

//Initializes the stack with the specified max size
struct Stack* init_stack(unsigned int max_size);

//Check if the stack is full
int is_full(struct Stack* stack);

//Check if the stack is empty
int is_empty(struct Stack* stack);

//Push a number on to the stack
int push(struct Stack* stack, int to_add);

//Remove a number from the top of the stack
int pop(struct Stack* stack);

//Display the entire stack
void display(struct Stack* stack);

#endif
