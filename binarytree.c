#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"
#include "binarytree.h"

void initialize(BT* bt){
	bt->num_elements=0;
	bt->root=NULL;
}

bool search(BT* bt, int key){
	Node* current=bt->root;
	while(current!=NULL){
		if(key==current->data){
			return true;
		}
		else if(key<current->data){
			current=current->left;
		}
		else{
			current=current->right;
		}
	}
	return false; //key not found
}

void insert(BT* bt, int item){
	Node* temp=newNode(item);
	if(bt->root==NULL){
		bt->root=temp;
	}
	else{
		Node* current=bt->root;
		while(current!=NULL){
			if(temp->data < current->data){
				if(current->left==NULL){
					current->left=temp;
					current=NULL;
				}
				else{
					current=current->left;
				}
			}
			else{
				if(current->right==NULL){
					current->right=temp;
					current=NULL;
				}
				else{
					current=current->right;
				}
			}
		}
	}
}

void printinorder(BT* bt){
	Node currNode=bt->root;
}

void printpreorder(BT* bt){
	
}

void printpostorder(BT* bt){
	
}

int btsize(BT* bt){
	
}

int treeheight(BT* bt){
	
}