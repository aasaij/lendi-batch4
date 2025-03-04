//Program to implement linear seatch algorithm
#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
typedef enum bool {false, true} boolean;

boolean linearSearch(int size, char nameList[size][10], char search[]){
	for (int i = 0; i<size; i++){
		if(!strcmp(nameList[i],search))
			return true;
	}
	return false;
}

int main(){
	char names[][10] = {"Babu", "Jogi", "Venki", "Chakri", "Revi"};
	int n = sizeof(names)/sizeof(names[0]);
	printf("%s", linearSearch(n,names, "Venki")?"Found":"Not Found");	
	return 0;
}