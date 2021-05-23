#include <stdio.h>
#include <string.h>

int main(){
	char n[20]="Joel";
	char name[20];
	
	printf("Enter you first name: \n");
	scanf("%s", &name);
	strcmp(n, name)==0 ? printf("this is Joel"): printf("this is not Joel");

	return 0;
}
