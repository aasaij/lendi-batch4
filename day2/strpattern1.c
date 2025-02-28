#include <stdio.h>

int main(){
//	printf("%*s\n", 35,  "Niharika is soo cute!");
//	printf("%-15s is\n","Niharika" );
//	printf("%-15s is\n","Keerthi" );
//	printf("%-15s is\n","Prasanna" );
//	printf("%-15s is\n","Deepa" );
//	printf("%-15s is\n","Pranavi" );
//	char *str = "Deepa";
	char str[100];
	int len;
	scanf("%s%n", str, &len);
	for (int i = 1; i<=len; i++)
		printf("%*.*s%-*.*s\n", len,i, str, len,i, str);	
	for (int i = len; i>=1; i--)
		printf("%*.*s%-*.*s\n", len,i, str, len,i, str);
		
//	printf("%*.*s\n", 5,4, str);
//	printf("%*.*s\n", 5,3, str);
//	printf("%*.*s\n", 5,2, str);
//	printf("%*.*s\n", 5,1, str);
	return 0;
}

//Deepa
//Deep
//Dee
//De
//D