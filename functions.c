#include<stdio.h>
#include<string.h>
#include<conio.h>
void main(){
	
	int grade;
	char str1[10]="BIS";
	char str2[10];
	strcpy(str2,str1);
	puts(str2);
	printf("%s",str1);
	if(strcmp(str1,str2)==0){
		puts("ko");
	}
	strcat(str1,"AAA");
	printf("%d",strlen(str1));
	grade = getchar();
	putchar(grade); 
}
