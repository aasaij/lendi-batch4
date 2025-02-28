#include <stdio.h>
int main(){
	int x, i,j;
	scanf("%d", &x);
	for (i = 1, j= x; i<j; i++, j--)
		printf("%*c%*c\n", i,i+64,j-i,j+64);
	printf("%*c", i,i+64)	;
	return 0;
}