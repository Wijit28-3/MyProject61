#include <stdio.h>
void main(){
	int x=0,y=10;
	for(x=0;y<20;x++,y++){
		x=x+y;
		x++;
			printf("sum of x,y = %d\n",x);
	}
	
	printf("sum of x,y = %d\n",x);
	
	
}
