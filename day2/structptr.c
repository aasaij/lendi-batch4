#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Employee{
	int id; 
	char name[15]; 
	float salary; 
}employee;

int main(){
	employee *ptr;	
	int size;
	scanf("%d", &size);
	ptr = (employee *)calloc(size, sizeof(employee));
	for (int i = 0; i<size; i++)
		scanf("%d %s %f", &ptr[i].id, ptr[i].name, 
			&ptr[i].salary);
	for (int i = 0; i<size; i++)			
		printf("%5d %-15s %10.2f\n",ptr[i].id, ptr[i].name, ptr[i].salary);
	return 0;
}