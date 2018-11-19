#include<stdio.h>
#incilud<conio.h>
void main(){ 
	int total;
	myStar();
	total = mySum(10,25);
	printf("\nmySum = %d\n"),mySum(10,25);
	myStar();
}
void myStar(){
	getch();
	printf("\n********************************************");	
}
int mySum(int i,int j){
		int total=0;
		total = i+j;
		return total;
	}

