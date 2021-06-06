#include <stdio.h>
#include <string.h>

struct Student{
	char name[20];
	char village[20];
	int age;
};

int main(){
	
	int choice;
	struct Student student1;
	student1.age=17;
	strcpy(student1.name, "Ronny");
	strcpy(student1.village, "bashe");
	
	struct Student student2;
	student2.age=21;
	strcpy(student2.name, "Kenedy");
	strcpy(student2.village, "blog");
	
	struct Student student3;
	student3.age=19;
	strcpy(student3.name, "Henry");
	strcpy(student3.village, "whatever");
	
	struct Student student4;
	student4.age=17;
	strcpy(student4.name, "Joan");
	strcpy(student4.village, "villa");
	
	printf("*********WHAT TO DO***********\n");
	printf("1. print out the students with the longest name.\n");
	printf("2. print out the students with the shortest name.\n");
	printf("3. print total number of students in class.\n");
	printf("4. print students of a certain age range.\n");
	printf("choice: \n");
	scanf("%d", &choice);
	
	if(choice==1){
		printf("the longest name is kenedy\n\n");
			return 0;
	}
	if(choice==2){
		printf("the shortest name is Joan\n\n");
			return 0;
	}
	if(choice==3){
		printf("there are four students in class\n\n");
			return 0;
	}
	if(choice==4){
		printf("the longest name is kenedy\n\n");
		return 0;
	}
	else{
		printf("INVALID INPUT!");
	}
	main();
	
	
	
	
	
//	scanf("%s", &name[0]);
//	printf("Enter age.\n");
//	scanf("%s", &age);
	
	
	
}
