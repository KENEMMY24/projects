#include <stdio.h>

int main(){
	int multiple, n=1000, d;
	

      printf("\nEnter the number : ") ; 
      scanf("%d", &d) ; 
      printf("\nThe numbers divisible by %d are :\n\n", d) ; 
     
	  for(multiple = 1 ; multiple <= n ; multiple++) 
      if(multiple % d == 0) 
      printf("%d\n", multiple) ;
   
   }
