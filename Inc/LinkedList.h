#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H

#include <stdlib.h>

typedef struct Node Node;

typedef struct Node
{
	void *object;
	Node *prev;
	Node *next;

} Node;

typedef struct LinkedList
{
	Node *head;
	Node *tail;
	unsigned length;

} LinkedList;

// push *object into linkedlist
Node* Push(LinkedList *linked_list, void *object);
void RemoveNode(Node *node);

#endif