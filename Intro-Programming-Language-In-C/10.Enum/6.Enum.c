#include<stdio.h>

int main( void )
{
	enum boolean {
		false = 0,
		true = 1
	};
	
	enum boolean isTrue;
	
	isTrue = true;
	if(isTrue == true)
			printf("True\n");
			
return 0;
}

