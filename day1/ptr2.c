//Program to demonstrate pointers
#include <stdio.h>
int main(){
	int x = 10;
	//pointer declaration
	int *ptr;
	ptr = &x;
	*ptr = 200;
	ptr++;
	printf("%d %d", x, *ptr);
	return 0;
}