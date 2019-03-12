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

void printNodeINorder(Node* node){
	if (node == NULL){
		return;
	}
	printNodeINorder(node->left);
	printf("%d", node->data);
	printNodeINorder(node->right);
}

void printNodePREorder(Node* node){
	if (node == NULL){
		return;
	}
	printNodePREorder(node->left);
	printf("%d", node->data);
	printNodePREorder(node->right);
}

void printNodePOSTorder(Node* node){
	if (node == NULL){
		return;
	}
	printNodePREorder(node->left);
	printf("%d", node->data);
	printNodePREorder(node->right);
}