#include<stdio.h>
int main()
{
	char String[40] , temp;
	int n , i ;
	printf("Enter a sentence: ");
	gets(String);
	
	for(n = 0; String[n]!='\0'; n++);
	
	for(i=0; i<n/2; i++){

		temp = String[n-i-1];
		String[n-i-1] = String[i];
		String[i] = temp;
}

printf("reverse of string : %s",String);	
}
