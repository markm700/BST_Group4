#ifndef BINARYTREE_H
#define BINARYTREE_H

typedef struct binary_tree{
int num_elements;
struct binary_tree* left;
struct binary_tree* right;


}bt;


void initialize(binary_tree* bt);
bool search(binary_tree* bt, int key);
void insert(binary_tree* bt, int item);
void printinorder(binary_tree* bt);
void printpreorder(binary_tree* bt);
void printpostorder(binary_tree* bt);
int btsize(binary_tree* bt);
int treeheight(binary_tree* bt);



#endif