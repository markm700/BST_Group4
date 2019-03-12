#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node_struct {
	int data;
	struct node_struct* left;
	struct node_struct* right;
} Node;

Node* newNode(int data);

#endif
