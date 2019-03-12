#include <stdio.h>
#include <stdlib.h>
#include "node.h"

Node* newNode(int data) {
	Node newNode;
<<<<<<< HEAD
    newNode.data = data;
=======
	newNode.data = data;
>>>>>>> cebf0a2885ce8019c5b68b2add7ef7c9879a611e
	newNode.left = NULL;
	newNode.right = NULL;
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr = &newNode;
	return ptr;
}

void printNodeINorder(Node* node){
	if (node == NULL){
		return;
	}
	printNodeINorder(node->left);
	printf("%d", node->data);
	printNodeINorder(node->right);
}