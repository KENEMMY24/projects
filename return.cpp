#include <stdio.h>

int main(){
	int a=1000;
	 
	 label:
        printf("%d\n", a);
        a--;
        a--;
		if(a>=0)
		goto label;	
	
	
	
	return 0;
}
