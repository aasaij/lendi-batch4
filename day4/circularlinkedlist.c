//Program to demonstrate circular linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	char element;
	struct node *nxt;
}Node;

Node* createNode(char data){
	Node* temp =(Node*) calloc(1, sizeof(Node));
	temp->element = data;
	return temp;
}
Node* addFirst(Node* tail, char data){
	Node* newNode = createNode(data);
	//tail is pointing the last element
	//checking whether the list is not empty
	if (tail){
		newNode->nxt = tail->nxt;
		tail->nxt = newNode;
	}
	else{
		tail = newNode;
		tail->nxt = tail;
	}
	return tail;
}
Node* addLast(Node* tail, char data){
	Node* newNode = createNode(data);
	//tail is pointing the last element
	//checking whether the list is not empty
	if (tail){
		newNode->nxt = tail->nxt;
		tail->nxt = newNode;
		tail = newNode;		
	}
	else{// if it is empty
		tail = newNode;
		tail->nxt = tail;
	}
	return tail;
}
Node* deleteFirst(Node* tail){
	if (tail){
		if (tail->nxt == tail) {
			free(tail);
			return NULL;
		}
		else{
			Node *temp = tail->nxt;
			tail->nxt = temp->nxt;
			free(temp);
		}
	}
	return tail;
}
Node* deleteLast(Node* tail){
	if (tail){
		if (tail->nxt == tail) {
			free(tail);
			return NULL;
		}
		else{
			Node *temp;
			for(temp = tail->nxt;temp->nxt != tail; temp=temp->nxt);
			Node *t = tail;
			temp->nxt = tail->nxt;
			tail= temp;
			free(t);
		}
	}
	return tail;

}
void printList(Node* tail){
	if(tail){
		Node* temp = tail->nxt;
		printf("\n[");
		for (;temp->nxt != tail->nxt; temp = temp->nxt)
			printf("'%c',", temp->element);
		printf("'%c']", temp->element);		
	}
	else
		printf("\n[]\n");
}

int main(){
	Node *tail = NULL;
	printList(tail);
	tail = addFirst(tail, 'B');
	tail = addFirst(tail, 'A');
	tail = addLast(tail, 'C');
	printList(tail);
	tail = deleteFirst(tail);
	printList(tail);
	tail = deleteLast(tail);
	printList(tail);
	return 0;
}