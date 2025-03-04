//Program to demonstrate doubly linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct employee{
	int id;
	char name[20];
	double salary;
}Employee;
typedef struct node{
	Employee emp;
	struct node *prv, *nxt;
}Node;
Node* createNode(Employee element){
	Node *temp = (Node*) calloc(1, sizeof(Node));
	temp->emp = element;
	return temp;	
}
Node* addFirst(Node* list, Employee element){
	Node* newNode = createNode(element);
	//checking whether the list is empty
	if (!list)
		return newNode;
	newNode->nxt = list;
	list->prv = newNode;
	list = newNode;
	return list;
}

void printList(Node* list){
	if (list){
		printf("\nOriginal Order \n");
		printf("[");
		Node* temp;
		for (temp = list; temp->nxt; temp=temp->nxt)
			printf("{%d,'%s', %.2lf},", temp->emp.id,temp->emp.name, temp->emp.salary);
		printf("{%d,'%s', %.2lf}]\n", temp->emp.id,temp->emp.name, temp->emp.salary);
	}
	else
		printf("\n[]\n");
}


int main(){
	Node* root = NULL;
	Employee e = {101, "Babu", 1200000};
	Employee e1 = {102, "Jogi", 1500000};
	root = addFirst(root, e);
	root = addFirst(root, e1);
	printList(root);
	return 0;
}