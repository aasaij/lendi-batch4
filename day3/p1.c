#include <stdio.h>

int main(){
	unsigned char x = 250;
	int y ;
	y = x + !x + ~x +++x;
	printf("%d", y);
	return 0;
}