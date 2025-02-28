//Program to demonstrate link
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int data;
	struct Node *link;
}Node;

int main(){
	Node *x, *y, *z;
	x = (Node*)calloc(1, sizeof(Node));
	y = (Node*)calloc(1, sizeof(Node));
	z = (Node*)calloc(1, sizeof(Node));
	x->data = 100;
	y->data = 200;
	z->data = 300;
	x->link = y;
	y->link = z;
	printf("%d", x->link->link->data); // z->data
	return 0;
}
