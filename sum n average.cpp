#include <stdio.h>

int main(){
   
   int a;
   
   printf("Enter the number of the month to find how many days it has:\n");
   scanf("%d",&a);
  
     if (a==1){ printf("sum of the days in January is 31 days\nand average is %d", 31/2);} 
     if (a==2){ printf("sum of the days in february is 29 days\nand average is %d", 29/2);}
     if (a==3){ printf("sum of the days in March is 31 days\nand average is %d", 31/2);} 
     if (a==4){ printf("sum of the days in April is 30 days\nand average is %d", 30/2);}
     if (a==5){ printf("sum of the days in May is 31 days\nand average is %d", 31/2);} 
     if (a==6){ printf("sum of the days in June is 30 days\nand average is %d", 30/2);}
     if (a==7){ printf("sum of the days in July is 31 days\nand average is %d", 31/2);} 
     if (a==8){ printf("sum of the days in August is 31 days\nand average is %d", 31/2);}
     if (a==9){ printf("sum of the days in September is 30 days\nand average is %d", 30/2);} 
     if (a==10){ printf("sum of the days in October is 31 days\nand average is %d", 31/2);}
     if (a==11){ printf("sum of the days in November is 30 days\nand average is %d", 30/2);} 
     if (a==12){ printf("sum of the days in December is 31 days\nand average is %d", 31/2);}
     

	return 0;
}
