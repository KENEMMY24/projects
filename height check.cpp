#include <stdio.h>

int main(){
	
	int height;
	
	
	printf("Enter your height(cm):\n");
	scanf("%d", &height);

	if(height<100){
		printf("You are a dwarf.");
	}
	else{
		printf("Wow! You gat a height mate.");
	}
}
