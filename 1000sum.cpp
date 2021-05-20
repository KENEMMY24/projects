#include <stdio.h>

int main(){
	int a;
	 
	 label:
        printf("%d\n", a);
        a++;
		if(a<=1000)
		goto label;	
	
	
	
	return 0;
}
