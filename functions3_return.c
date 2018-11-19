#include<stdio.h>

void main(){ 
	int total;
	printd("Total = %d",getTotal(10));
	total = getTotal(10);
	printd("Total = %d",getDiscount(total));
}
void getTotal(int i){
		int total;
		total = 1500*i;
		return total;
}
int getDiscount(int j){
		int discount=0;
		if(j>15000){
			discount = 100;
		}
	}
