#include <stdio.h>

int main(){
	
	int num1;
	int num2;
	int num3;
	
	
	printf("Enter three numbers:\n");
	scanf("%d\n%d\n%d", &num1, &num2, &num3);
	

	if(num1>num2 && num1>num3){
		printf("%d is the greatest among the three", num1);
	}
	if(num2>num1 && num2>num3){
		printf("%d is the greatest among the three", num2);
	}
	else{
		printf("%d is the greatest among the three", num3);
	}
}
