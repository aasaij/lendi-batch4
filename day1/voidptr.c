//Program to demonstrate void*
#include <stdio.h>
int main(){
	int x = 10;
	char c = 'A';
	float f = 10.5;
	void *ptr;
	ptr = &x; // pointing an integer
	printf("%d\n", *(int*)ptr);	
	ptr = &c; //pointing a character
	printf("%c\n", *(char*)ptr);	
	ptr = &f; //pointing a float 
	printf("%.2f\n", *(float*)ptr);	
	return 0;
}