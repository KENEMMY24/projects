#include <stdio.h>

int main(){
	
	int Maths;
	int Phy;
	int Chem;

	
	printf("Checking Eligibility for Admission!\n\n");
	printf("Marks is Maths:");
	scanf("%d", &Maths);
	printf("Marks is Physics:");
	scanf("%d", &Phy);
	printf("Marks is Chemistry:");
	scanf("%d", &Chem);
	
	int total= Maths + Phy + Chem;
	int total2= Maths + Phy;
	
	printf("\n\n");
	printf("Total Marks is %d\n", total);
	printf("Total Marks in Maths and Physics is %d\n", total2);

	if(total>=190 || total2>=140){
		printf("Congratulations! The candidate is eligible for admission.");
	}
	else{
		printf("Sorry! The candidate is not eligible for admission.");
	}
}
