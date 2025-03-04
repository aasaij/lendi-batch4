//Program to demonstrate linked list
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//self referencial structure
typedef struct Node {
	char name[30];
	struct Node *nxt;
}Node;
//function used to create a node with element
Node* createNode(char element[]){
	Node* temp = calloc(1, sizeof(Node));
	strcpy(temp->name,element);	
	return temp;
}
int main(){
	Node *x, *y, *z;
	x = createNode("Anuja");
	y = createNode("Vismayi");	
	z = createNode("Keerthika");	
	x->nxt = y;
	y->nxt = z;
	return 0;
}