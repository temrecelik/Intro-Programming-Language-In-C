#include <stdio.h>

int main()
{


	int a,b,n;

	printf("b :");
	scanf("%d" ,&b);

	printf("a :");
	scanf("%d" ,&a);
	

	n=b;
	b=a;
	a=n;
	
	printf("a :%d b: %d" ,a,b);
}
	
	
