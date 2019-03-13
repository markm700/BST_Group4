#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "node.h"

typedef struct binary_tree_struct {
	int num_elements;
	int height;
	Node* root;
} BT;

void initialize(BT* bt);
bool search(BT* bt, int key);
void insert(BT* bt, int item);
void printinorder(BT* bt);
void printpreorder(BT* bt);
void printpostorder(BT* bt);
int btsize(BT* bt);
int treeheight(BT* bt);

#endif
