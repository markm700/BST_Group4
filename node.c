#include <stdio.h>
#include <stdlib.h>
#include "node.h"

Node* newNode(int data) {
	Node newNode;
	newNode.data = data;
	newNode.left = NULL;
	newNode.right = NULL;
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr = &newNode;
	return ptr;
}
