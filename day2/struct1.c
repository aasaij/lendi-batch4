#include <stdio.h>
#include <string.h>
struct Employee{
	int id; //4
	char name[15]; //15
	float salary; // 4
}e1, e2, e3;

int main(){
//	printf("%d", sizeof(struct Employee));
	e1.id = 101;
	strcpy(e1.name, "Vineela");
	e1.salary = 2000000;
	printf("%d %s %.2lf", e1.id, e1.name, e1.salary);
	return 0;
}