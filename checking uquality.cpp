#include <stdio.h>

int main(){
	
	int number1;
	int number2;
	
	printf("Enter two numbers to check if they are equal!:");
	scanf("%d\n%d", &number1, &number2);
	
	number1==number2 ? printf("Number1 and Number 2 are equal."): printf("Number1 and Number2 are not the same");
}
