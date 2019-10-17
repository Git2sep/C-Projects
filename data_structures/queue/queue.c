#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Queue* init_queue(unsigned int max_size)
{
  Queue* queue = (Queue*)malloc(sizeof(Queue));
  queue->max_size = max_size;
  queue->front = 0;
  queue->rear = 0;
  queue->items = (int*)malloc(sizeof(queue->max_size * sizeof(int)));
  return queue;
}

//Check if the queue is empty
int is_empty(Queue* queue)
{
  return queue->rear == queue->front;
}

//Check if the queue is full
int is_full(Queue* queue)
{
  return queue->rear == queue->max_size;
}

//Add an element to the queue
int enqueue(Queue* queue, int to_add)
{
  if (is_full(queue))
  {
    return -1;
  }
  queue->items[queue->rear] = to_add;
  queue->rear++;
  return to_add;
}

//Remove an element from the queue
int dequeue(Queue* queue)
{
  if (is_empty(queue))
  {
    return -1;
  }
  int to_remove = queue->items[queue->front];
  int i;
  for (i = 1; i < queue->rear; i++)
  {
    queue->items[i - 1] = queue->items[i];
  }
  queue->rear--;
  return to_remove;
}

//Display the contents of the queue
void display(Queue* queue)
{
  printf("\n");
  int i;
  for (i = queue->front; i < queue->rear; i++)
  {
    printf("%d ", queue->items[i]);
  }
  printf("\n^\n|\n|--Front\n");
}
