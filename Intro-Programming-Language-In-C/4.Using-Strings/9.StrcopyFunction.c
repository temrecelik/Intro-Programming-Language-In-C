#include<stdio.h>
#include<string.h>

int main()
{
	char str[40];
	char copy[100];
	
	gets(str);
	
	strcpy(copy,str); //copies the str string
	
	printf("%s" ,copy);
	
return 0;
}
