#include<stdio.h>
void main(){
	int i=0;
	char MyStr[]="Hello World";
	
	char*MtmyStr=MyStr;
	while(i<=11)
	
	{
		printf("%c\n",*(MtmyStr+i));
		i++;
		
	}
}
