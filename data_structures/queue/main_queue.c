#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/**
  * This is an interactive terminal program that allows the user
  * to create and manipulate a queue.
  *
  * Author: Thomas Haddy 10/16/19
  */
int main()
{
  Queue* queue;
  char size_buffer[4];
  int max_size, to_add, to_remove;
  char user_in;

  //Init the queue
  printf("Welcome to creating a queue in C!\n");
  printf("Please enter a size of the queue(Integer between 1-999): ");
  fgets(size_buffer, sizeof(size_buffer), stdin);
  sscanf(size_buffer, "%d", &max_size);
  if (max_size <= 0)
  {
    fprintf(stderr, "Not a valid size! Must be between 1 and 999. Exiting...\n");
    return 1;
  }

  queue = init_queue(max_size);

  //Ask user how they want to manipulate the queue
  printf("\n(1) Enqueue\n(2) Dequeue\n(3) Display\n(q) Quit\n");
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
        scanf(" %d", &to_add);
        int added = enqueue(queue, to_add);
        if (added == -1)
        {
          printf("The queue is full!\n");
        }
        else
        {
          printf("Enqueued %d on the queue\n", added);
        }
        break;
      case '2':
        to_remove = dequeue(queue);
        if (to_remove == -1)
        {
          printf("The queue is empty! Unable to dequeue\n");
        }
        else
        {
          printf("Dequeued %d off the front of the queue\n", to_remove);
        }
        break;
      case '3':
        display(queue);
        break;
    }

    //Clear stdin
    while ((getchar()) != '\n');
    //Ask again until 'q' is pressed
    printf("\n(1) Enqueue\n(2) Dequeue\n(3) Display\n(q) Quit\n");
    printf("Enter a number(1-3): ");
    user_in = getchar();
  }

  //Free allocated memory
  free(queue->items);
  free(queue);
  return 0;
}
