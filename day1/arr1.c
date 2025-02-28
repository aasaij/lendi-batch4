//Program to demonstrate array
#include <stdio.h>
int main(){
	
//	int arr[] = {10,20,30,11,21,33};
//	printf("%d", sizeof(arr)/sizeof(arr[0]));
//	int arr[5] = {[2]=10};
	int arr[5] = {100,200,300, [2 ...4] = 10};
	//printing array elements
	for (int i = 0; i<5; printf("%d  ", arr[i++]));
	return 0;
}