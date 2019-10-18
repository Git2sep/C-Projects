#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

typedef struct Node
{
  int data;
  Node* next;
  Node* prev;
} Node;

//Display the linked list
void display();

#endif
