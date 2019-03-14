#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "binarytree.h"
#include "node.h"

int main() {
	BT bt;
	bool found;
	FILE* inFile = NULL;
	int numIn;

	numIn = 0;
	initialize(&bt);

	inFile = fopen("myfile.txt", "r");

	if (inFile == NULL) {
		printf("Could not open file\n");
		return -1; // -1 indicates error
	}

	fscanf(inFile, "%d", &numIn); //read in first number input
	while (!feof(inFile)) {
		insert(&bt, numIn);
		//printf("%d\n",numIn); //this works
		fscanf(inFile, "%d", &numIn); //read in other number inputs
	}
	/*	printf("%d", bt->root->data);
	 printf("%d", bt->root->left->data);
	 printf("%d", bt->root->left->left->data);*/
	printf("Print in order\n");
	printinorder(&bt);
	printf("\nPrint pre order\n");
	printpreorder(&bt);
	printf("\nPrint post order\n");
	printpostorder(&bt);
	printf("\n");
	found = search(&bt, 33);
	if (found) {
		printf("FOUND 33\n");
	}
	found = search(&bt, 38);
	if (found) {
		printf("FOUND 38\n");
	}
	printf("Number of elements in tree: %d\n", btsize(&bt));
	printf("Tree height: %d\n", treeheight(&bt));

	return 0;
}
