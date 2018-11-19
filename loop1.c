#include <stdio.h>
void main(){
	int i,total=0,score;
	while(total<50){
		printf("\nInput Score :");
		scanf("%d",&score);
		total = total+score;
		if(total<50){
			printf("\n\n\t ===Grade F === ");
		}else{
			printf("\n PASS");	
		}
		i++;	
	}
	
}   
