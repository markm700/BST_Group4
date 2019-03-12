#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node_struct {
	int data;
	struct node_struct* left;
	struct node_struct* right;
} Node;

Node* newNode(int newNum);
void printNodeINorder(Node* node);
void printNodePREorder(Node* node);
void printNodePOSTorder(Node* node);

#endif
