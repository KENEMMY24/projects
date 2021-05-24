#include <stdio.h>

int main()
{
	int num1;
	int num2;
	
	printf("Enter the two numbers:\n");
	scanf("%d%d",&num1 ,&num2);
	
	if(num1>=num2 ? printf("%d is greater",num1 ): printf("%d is greater",num2)): else printf("they are equal");
}
