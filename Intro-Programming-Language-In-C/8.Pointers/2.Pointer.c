#include<stdio.h>

int main()
{
	int i ;
	int *iptr;
	iptr = &i;
	*iptr = 8;
	
	printf("i degiskeninin degeri : %d\n" , i);
	printf("iptr adresinin icerigi : %d" ,*iptr);

getchar();	
}
