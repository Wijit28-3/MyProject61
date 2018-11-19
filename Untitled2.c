#include <stdio.h>
void main(){
	float salary;
	int worktime;
	float tax=0.10,total;
	printf("INPUT SALARY:");
	scanf("%f",&salary);
printf("INPUT WORL TIME:");
	scanf("%5d",&worktime);
	total = salary - (salary*tax);
	printf("\nsalary-tax:%.2f",total);
		worktime = (worktime-40)*100;//over time
		printf("\nOT :%d",worktime);
		total = total+worktime;
		printf("\nSalary Total = %.2f",total);
	
}
