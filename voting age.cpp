#include <stdio.h>

int main(){
	
	int age;
	
	
	printf("Enter a age to check if it's eligible for voting!:\n");
	scanf("%d", &age);
	
	(age<18) ? printf("Sorry! You are not eligible for casting your vote."): printf("Congratulation! You are eligible for casting your vote.");
}
