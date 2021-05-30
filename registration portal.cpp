#include <stdio.h>

int main(){
	
	int index;
	int a;
	char b[30];
	const char grade[]={'A','B','C','D','F'};
	int E, M, SS, SC;
	
 	
	printf("UNEB EXAMINATION REGISTRATION...\n\n");
	printf("PLEASE ENTER YOUR INDEX NUMBER BELOW\n Index: ");
	scanf("%d", &index);
	
	printf("Your school is RUBY HIGH SCHOOL!\n\n");
	printf("Press one(1) to continue if that is your school: \n");
	scanf("%d", &a);
	
	if (a==1){
	printf("Please enter your full name\nName:");
	scanf("%s", &b);
	}else {
		printf("pleas try again");
		return 0;
	}
	
	
	printf("Pleas enter the marks for the following subjects\nEGLISH: MATH: SST: SCIENCE: \n");
	scanf("%d\n%d\n%d\n%d",&E,&M,&SS,&SC);
	
	int average=(E+M+SS+SC)/4;
	
	if(average>=90){
	printf("HELLO %s YOUR GRADE IS %c AND YOUR AVERAGE IS %d", b, grade[0], (E+M+SS+SC)/4);
	return 0;
	}	
	if(average>=75){
	printf("HELLO %s YOUR GRADE IS %c AND YOUR AVERAGE IS %d", b, grade[1], (E+M+SS+SC)/4);
	return 0;
	}	
	if(average>=50){
	printf("HELLO %s YOUR GRADE IS %c AND YOUR AVERAGE IS %d", b, grade[2], (E+M+SS+SC)/4);
	return 0;
	}
	if(average>=40){
	printf("HELLO %s YOUR GRADE IS %c AND YOUR AVERAGE IS %d", b, grade[3], (E+M+SS+SC)/4);
	return 0;
	}
	if(average<=40){
	printf("HELLO %s YOUR GRADE IS %c AND YOUR AVERAGE IS %d", b, grade[4], (E+M+SS+SC)/4);
	return 0;
	}	
	
	
}
