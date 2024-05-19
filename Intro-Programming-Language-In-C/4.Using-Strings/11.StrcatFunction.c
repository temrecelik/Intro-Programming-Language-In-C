#include<stdio.h>
#include<string.h>
/*
The strcat function has two string parameters. It adds the string in the second parameter 
to the string in the first parameter
*/
int main()
{
	char str1[50] ,str2[50];
	
	printf("enter a sentence:");
	gets(str1);
	
	printf("enter another sentence:");
	gets(str2);
	
	strcat(str1,str2);
	
	printf("%s" ,str1);
	

return 0;
}
