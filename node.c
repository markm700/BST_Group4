#include <stdio.h>
#include <stdlib.h>
#include "node.h"

Node* newNode(int data) {
	Node newNode;
<<<<<<< HEAD
	newNode.data=data;
	newNode.left=NULL;
	newNode.right=NULL;
=======
	newNode.data = data;
	newNode.left = NULL;
	newNode.right = NULL;
>>>>>>> 950cfbdc6e63aead3e80af84ea39e42bbfbcab97
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr = &newNode;
	return ptr;
}
