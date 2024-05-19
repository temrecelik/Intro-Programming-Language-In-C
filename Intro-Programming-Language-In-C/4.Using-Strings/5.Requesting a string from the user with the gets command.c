#include<stdio.h>

int main(){
	
	char String[100];
	printf("Enter a sentence:");
	gets(String);
	/*
	If we want a string from the user with the gets command, 
	then the space character is also printed.
	*/
	printf("printable part : %s" ,String);

return 0;
}

