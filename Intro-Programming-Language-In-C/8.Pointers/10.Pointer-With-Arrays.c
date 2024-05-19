#include<stdio.h>
//pointer da tutulan diziyi baþka pointer ile baþka bir diziye atma

int main()
{
	char *a = "1234567890" ; 
	char x[10];
	char *p1 , *p2;
	
	printf("%s\n" ,a);
	
	p1=a;
	p2=x;
	
	while(*p1 !='\0')
	{
		*p2=*p1;
		p1++;
		p2++;
		
	}
	
	printf("%s \n" ,x);
	getchar();
}
