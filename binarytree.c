#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"
#include "binarytree.h"

void initialize(BT* bt){
	bt->num_elements=0;
	bt->root=NULL; //may need to alloc mem for root here
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
		else{ //key > current->data
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
	int height = 0;
	else{
		Node* current=bt->root;
		while(current!=NULL){
			if(temp->data < current->data){
				if(current->left==NULL){
					current->left=temp;
					current=NULL; //ends while loop
				}
				else{
					current=current->left;
					height++;
				}
			}
			else{
				if(current->right==NULL){
					current->right=temp;
					current=NULL; //ends while loop
				}
				else{
					current=current->right;
					height++;
				}
			}
		}
	}
}

void printinorder(BT* bt){
	Node* currNode=bt->root;
}

void printpreorder(BT* bt){
	
}

void printpostorder(BT* bt){
	
}

int btsize(BT* bt){
	return bt->num_elements;
}

int treeheight(BT* bt){
	int height = 0;
	if(bt->root==NULL)
		return 0;
	Node* current=bt->root;
	int tempHeight = 0;
	if (current->left!=null){
		while (current->left!=null){
			current=current->left;
			tempHeight++;
		}
	}
	if (tempHeight>height)
		height=tempHeight;
	current=current->root;
	tempHeight=height-1;
	if (current->right!=null){
		while (current->left!=null){
			current=current->left;
			tempHeight++;
		}
	} else {
		
	}
	if (tempHeight>height)
		height=tempHeight;
	current=current->root;
	
	
	
	
	
	
	
	
	
	
}