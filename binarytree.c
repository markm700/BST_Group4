#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"
#include "binarytree.h"

void initialize(BT* bt) {
	bt->num_elements = 0;
	bt->height = 0;
	bt->root = (Node*)malloc(sizeof(Node));	//may need to alloc mem for root here
}

bool search(BT* bt, int key) {
	Node* current = bt->root;
	while (current != NULL) {
		if (key == current->data)
			return true;
		else if (key < current->data)
			current = current->left;
		else	//key > current->data
			current = current->right;
	}
	return false; 	//key not found
}

void insert(BT* bt, int item) {
	Node* temp = newNode(item);
	int height = 0;
	if (bt->root == NULL) {
		bt->root = temp;
	} else {
		Node* current = bt->root;
		while (current != NULL) {
			height++;
			if (temp->data < current->data) {
				if (current->left == NULL) {
					current->left = temp;
					current = NULL; 				//ends while loop
				} else
					current = current->left;
			} else { 							//temp->data >= current->data
				if (current->right == NULL) {
					current->right = temp;
					current = NULL; 				//ends while loop
				} else
					current = current->right;
			}
		}
	}
	bt->num_elements++;
	if (bt->height < height)
		bt->height = height;
}

void printinorder(BT* bt){
	Node* currNode=bt->root;

	if (currNode == NULL){
		return;
	}
	printNodeINorder(currNode->left);
	printf("%d", currNode->data);
	printNodeINorder(currNode->right);
}

void printpreorder(BT* bt) {
	Node* currNode = bt->root;
	if (currNode == NULL){
		return;
	}
	
}

void printpostorder(BT* bt) {
	Node* currNode =  bt->root;
	if (currNode == NULL){
		return;
	}
	
}

int btsize(BT* bt) {
	return bt->num_elements;
}

int treeheight(BT* bt) {
	return bt->height;
}
