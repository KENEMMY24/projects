#include <stdio.h>

int main(){
	
	int John;
	int Mary;
	int number;
	
	printf("Enter 1 to check if the ages are the same\n");
	printf("Enter 2 to check if Mary is older than John\n");
	printf("Enter 3 to get average age\n");
	printf("Enter 4 to check if John is older than Mary:\n");
	scanf("%d", &number);
	printf("Enter the age of John: \n");
	scanf("%d", &John);
	printf("Enter the age of Mary: \n");
	scanf("%d", &Mary);
	


	if (number==1){
	    John != Mary ? printf("the ages are not the same"): printf("the ages are the same");
	}
	
	if (number==2){
	     John < Mary ? printf("Mary is older than John"): printf("Mary is not older than John");
	}
	 if (number==3){
	     printf("the average age %d", (Mary+John)/2);
	}
	 if (number==4){
	    John > Mary ? printf("John is older than Mary"): printf("John is not older than Mary");
	}

	}
