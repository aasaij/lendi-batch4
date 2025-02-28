#include <stdio.h>
#include <string.h>
struct Employee{
	int id; 
	char name[15]; 
	float salary; 
};

int main(){
	struct Employee e1 = {102, "Ravi", 3000000};
	struct Employee e2 = {103};
	struct Employee e3 = {.salary = 5000000,.name="Assi"};
	printf("%d %s %.2lf\n", e1.id, e1.name, e1.salary);
	printf("%d %s %.2lf\n", e2.id, e2.name, e2.salary);
	printf("%d %s %.2lf\n", e3.id, e3.name, e3.salary);

	return 0;
}