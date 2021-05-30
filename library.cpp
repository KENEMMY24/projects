#include <stdio.h>

int main(){
	
	char name[20];
	char date[20];
	int book_No;
	char subject[15];
	
	printf("PLEASE ENTER YOUR NAME: ");
	gets(name);
	
	printf("PLEASE INSERT THE DATE: ");
	gets(date);
	
	printf("PLEASE ENTER THE SUBJECT: ");
	scanf("%s", &subject);
	
	printf("PLEASE ENTER THE BOOK NUMBER: ");
	scanf("%d", &book_No);
	
	printf("%s BORROWED A %s TEXTBOOK ON %s, BOOK NUMBER IS: %d", name, subject, date, book_No);
	
	
	
	
	
}
