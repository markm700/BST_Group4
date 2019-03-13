#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct node_struct {
	int data;
	int checked;
	struct node_struct* left;
	struct node_struct* right;
	struct node_struct* parent;
} Node;

Node* newNode(int newNum);
void printNodeINorder(Node* node);
void printNodePREorder(Node* node);
void printNodePOSTorder(Node* node);

#endif
