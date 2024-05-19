#include<stdio.h>

int carpim(int x, int y, int z)
{
	int carpim;
	carpim=x*y*z;
return carpim;
}
int main()
{
	int x,y,z;
	printf("Enter three  number:\n");
	printf("%d%d%d" ,&x ,&y ,&z);
	
	printf("Multipilication of numbers :%d" ,(carpim(x,y,z)));
return 0;
}

