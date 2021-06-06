#include <stdio.h>

int main(){
	
	int number;
	
	
	printf("Enter a numbers to check if its odd or even!:\n");
	scanf("%d", &number);
	
	(number%2==0) ? printf("%d is an even integer.",number): printf("%d is an odd integer",number);
}
