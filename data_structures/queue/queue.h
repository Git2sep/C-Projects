#ifndef QUEUE_H_
#define QUEUE_H_

/**
  * This represents a Queue data structure
  */
typedef struct Queue
{
  unsigned int front, rear;
  unsigned int max_size;
  int* items;
} Queue;

Queue* init_queue(unsigned int max_size);

//Check if the queue is empty
int is_empty(Queue* queue);

//Check if the queue is full
int is_full(Queue* queue);

//Add an element to the queue
int enqueue(Queue* queue, int to_add);

//Remove an element from the queue
int dequeue(Queue* queue);

//Display the contents of the queue
void display(Queue* queue);

#endif
