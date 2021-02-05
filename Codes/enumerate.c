// An example program to demonstrate working 
// of enum in C 
#include<stdio.h> 

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}; 
enum gender {Female= 1, Male = 0};

void main() 
{ 
	enum gender person;
	person = Female;
	printf("%d\n",person); 
	//return 0; 
} 

