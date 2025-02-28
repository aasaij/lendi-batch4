#include <stdio.h>
typedef struct Employee{
	int id; 
	char name[15]; 
	float salary; 
}employee;

int main(){
	//declaration of array of structures
	employee emps[] = {{101, "Sandeep", 3000000}, 
	{102, "Sathish", 5000000}, {104, "Akhil",-10000}};
	//structure pointer
	employee *ptr;
	ptr = emps;
	ptr = ptr + 2;
//	emps++;
	int size = sizeof(emps)/sizeof(employee);
	for (int i = 0; i<size; i++)
		printf("%5d %-15s %10.2f\n", ptr[-1].id,
			emps[i].name, emps[i].salary);

	return 0;
}