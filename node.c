#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "node.h"

Node* newNode(int newNum) {
	Node* newNode;
	newNode = (Node*) malloc(sizeof(Node));
    newNode->data = newNum;
	newNode->checked = 0;
	return newNode;
}

void printNodeINorder(Node* node){
	if (node == NULL){
		return;
	}
	printNodeINorder(node->left);
	printf("%d ", node->data);
	printNodeINorder(node->right);
}

void printNodePREorder(Node* node){
	if (node == NULL){
		return;
	}
	printf("%d ", node->data);
	printNodePREorder(node->left);
	printNodePREorder(node->right);
}

void printNodePOSTorder(Node* node){
	if (node == NULL){
		return;
	}
	printNodePOSTorder(node->left);
	printNodePOSTorder(node->right);
	printf("%d ", node->data);
}