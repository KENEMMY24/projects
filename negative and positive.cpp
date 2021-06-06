#include <stdio.h>

int main(){
	
	int number;
	
	
	printf("Enter a numbers to check if negative odd or positive!:\n");
	scanf("%d", &number);
	
	(number<0) ? printf("%d is a negative integer.",number): printf("%d is an positive integer",number);
}
