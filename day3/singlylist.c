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
//function to add node in the beginning
Node* addFirst(Node* list, char element[]){
	Node *newNode = createNode(element);
	newNode->nxt = list;
	list = newNode;
	return list;
}
Node* addLast(Node* list, char element[]){
	Node *newNode = createNode(element);
	if(!list) // checking whether it is empty
		return newNode;
	Node*  temp;
	for (temp = list; temp->nxt; temp= temp->nxt);
	temp->nxt = newNode;
	return list;
}
Node* addAtPosition(Node* list, char element[], int position){
//	Node* temp;
//	for (int i=1; i<position; i++){
//		temp = temp->nxt;
//	}
//	Node* newNode = createNode(element);
//	newNode->nxt = temp->nxt;
//	temp->nxt = newNode;
//	return list;
	if (position == 0 || position == 1)
		return addFirst(list, element);
	if (position > 1 && list ){
		Node* temp=list, *newNode = createNode(element);
		for (int i = 2; i<position && temp; i++, temp = temp->nxt);
		if(temp && temp->nxt==NULL){
			temp->nxt = newNode;
		}
		else if (temp && temp->nxt){
			newNode->nxt = temp->nxt;
			temp->nxt = newNode;
		}
	}
	return list;
}
//function delete first element in the list
Node* deleteFirst(Node* list){
	//checking whether the lis is not empty
	if (list){
		Node* temp = list;
		list = temp->nxt;
		free(temp);
	}
	return list;
}
Node* deleteLast(Node* list){
	//checking whether the list is not empty
	if (list){
		if (list->nxt==NULL){
			free(list);
			return NULL;
		}
		Node *temp;
		for (temp=list; temp->nxt->nxt; temp=temp->nxt);
		free(temp->nxt);
		temp->nxt = NULL;
	}
	return list;
}
Node* deleteAtPosition(Node* list, int position){
	if (position == 1 || position == 0)
		return deleteFirst(list);
	Node *temp = list;
	for (int i = 2; i<position && temp; i++, temp=temp->nxt);
	if (temp && temp->nxt){
		Node *t = temp->nxt;
		temp->nxt = t->nxt;
		free(t);
	}
	return list;
}
void printList(Node *list){
	if (list){ // list is not empty
		printf("\n[");
		Node* temp;
		for (temp = list; temp->nxt; temp= temp->nxt)
			printf("'%s',", temp->name);
		printf("'%s']\n", temp->name);
	}
	//list is empty
	else
		printf("\n[]\n");
}
char* getElement(){
	char *str  = calloc(31, sizeof(char));
	printf("Enter name : ");
	scanf("%s", str);
	return str;
}
int getPosition(){
	int x;
	printf("Enter position : ");
	scanf("%d", &x);
	return x;
}
void mainMenu(){
	printf("\nSingly Linked List Demo App\n");
	printf("***************************\n");
	printf("1. Add First Element\n");
	printf("2. Add Last Element\n");
	printf("3. Add at position\n");
	printf("4. Delete First Element\n");
	printf("5. Delete last Element\n");
	printf("6. Delete at position\n");
	printf("7. Print List\n");
	printf("Enter your choice  : ");	
}
int main(){
	Node *root = NULL;
	int choice;
	while (1){
		mainMenu();
		scanf("%d", &choice);
		switch(choice){
			case 1 :
				root = addFirst(root, getElement()); break;
			case 2 :
				root = addLast(root, getElement()); break;
			case 3 :
				root = addAtPosition(root, getElement(), getPosition()); break;
			case 4 :
				root = deleteFirst(root); break;
			case 5 :
				root = deleteLast(root); break;
			case 6 :
				root = deleteAtPosition(root, getPosition()); break;
			case 7 :
				printList(root);break;
			default:
				printf("Thank you so much for being very silent");
				return 0;	
		}
	}
	return 0;
}