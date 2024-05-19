#include<stdio.h>
#include<string.h>
//strlen is the function that gives the length of the string
int main()
{
	char str[50];
	int length;
	printf("enter a sentence:");
	gets(str);
	length = strlen(str);
	printf("string:%s  lenght of string:%d " ,str,length);
													
return 0;	
}
