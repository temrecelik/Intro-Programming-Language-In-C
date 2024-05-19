#include<stdio.h>

int main(){
	
	char String[ 100 ];
	
	printf("Enter a sentence:");
	scanf("%s" ,String);
	/*If the user string is taken with the scanf command, 
	it cannot be printed after the space character.*/
	
	printf("printable part : %s" ,String);
	
return 0;
}


