#include <stdio.h>

int main(){
	
	int X;
	int Y;
	
	
	printf("Enter two coordinates:\n");
	scanf("%d\n%d", &X, &Y);
	

	if(X>0 && Y>0){
		printf("The coordinate point (%d,%d) lies in the first quadrant", X, Y);
	}
	if(X>0 && Y<0){
		printf("The coordinate point (%d,%d) lies in the second quadrant", X, Y);
	}
	if(X<0 && Y<0){
		printf("The coordinate point (%d,%d) lies in the third quadrant", X, Y);
	}
	if(X<0 && Y>0){
		printf("The coordinate point (%d,%d) lies in the fourth quadrant", X, Y);
	}

}
