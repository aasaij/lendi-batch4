//Program to demonstrate pointer
#include <stdio.h>

int main(){
	int a, b, c;
	a = 10, b = 20, c = 30;
	printf("%d %d %d", a, b, *(&c));
	return 0;
}
//* -> indirection or dereferencing or value at operator
//&  Address operator
//->  structure pointer member accessing operator