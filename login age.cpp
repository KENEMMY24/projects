#include <stdio.h>
#include <string.h>

int age=55;

int main(){
	char a[30];
	char b[15];
	char c[]="emmy@gmail.com";
	char d[]="emmy";
	char e[]="asdfg";
	
	printf("Enter your username or email:\n");
	scanf("%s",&a);
	printf("Enter your password:\n");
	scanf("%s",&b);
	
	if((strcmp(a,c)==0 || strcmp(a,d)==0)   && strcmp(b,e)==0){
		printf("Your age is %d",age);
	}   else printf("SORRY! your input was incorrect.");
}
