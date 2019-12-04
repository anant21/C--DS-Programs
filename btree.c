
#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;

} *newNode;

struct node* create(int data){
	newNode = (struct node*) malloc(sizeof(struct node)); 
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}



void printPostorder(struct node* node) {
 
	if (node == NULL) 
		return; 

	// first recur on left subtree 
	printPostorder(node->left); 

	// then recur on right subtree 
	printPostorder(node->right); 

	// now deal with the node 
	printf("%d ", node->data); 
} 

void printInorder(struct node* node) 
{ 
	if (node == NULL) 
		return; 

	/* first recur on left child */
	printInorder(node->left); 

	/* then print the data of node */
	printf("%d ", node->data); 

	/* now recur on right child */
	printInorder(node->right); 
} 

void printPreorder(struct node* node) 
{ 
	if (node == NULL) 
		return; 

	/* first print data of node */
	printf("%d ", node->data); 

	/* then recur on left sutree */
	printPreorder(node->left); 

	/* now recur on right subtree */
	printPreorder(node->right); 
}	 


void main(){


	struct node *root = create(1); 
	root->left = create(2); 
	root->right = create(3); 
	root->left->left = create(4); 
	root->left->right = create(5); 

	printf("\nPreorder traversal of binary tree is \n"); 
	printPreorder(root); 

	printf("\nInorder traversal of binary tree is \n"); 
	printInorder(root); 

	printf("\nPostorder traversal of binary tree is \n"); 
	printPostorder(root); 

	getchar();
}
