//Program to demonstrate dynamic memory allocation
//Program to find second largest element in the list
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
	int size, max, smax;
	int* arr;	
	max = smax = INT_MIN; 
	scanf("%d", &size);
	arr=(int*)malloc(size * sizeof(int)); // arr[size]
	//reading <size> elements from the user
	for (int i = 0; i<size; scanf("%d", arr+i++));
	//finding second largest among the list
	for (int i = 0; i<size; i++){
		if ( max < arr[i]){
			smax = max;
			max = arr[i];
		}
		else if (smax < arr[i] && max != arr[i])
			smax = arr[i];
	}
	if (smax != INT_MIN)
		printf("Second Max : %d", smax);
	else
		printf("N/A");
	
	return 0;
}

/*
functions for DMA
stdlib.h
malloc()
	void* malloc(size_t size);
calloc()
	void* calloc(size_t numBlocks, size_t blockSize);
realloc()
	void* realloc(void* oldBlock, size_t newSize);
free()
	void free(void* block);
*/