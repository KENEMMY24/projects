#include <stdio.h>

int main(){
   
   int a;
   
   printf("Enter the number of the month to find how many days it has:\n");
   scanf("%d",&a);
  
     if (a==1){ printf("January has 31 days");} 
     if (a==2){ printf("February has 29 days");}
     if (a==3){ printf("March has 31 days");} 
     if (a==4){ printf("April has 30 days");}
     if (a==5){ printf("May has 31 days");} 
     if (a==6){ printf("June has 30 days");}
     if (a==7){ printf("July has 31 days");} 
     if (a==8){ printf("August has 31 days");}
     if (a==9){ printf("September has 30 days");} 
     if (a==10){ printf("October has 31 days");}
     if (a==11){ printf("November has 30 days");} 
     if (a==12){ printf("December has 31 days");}
     

	return 0;
}
