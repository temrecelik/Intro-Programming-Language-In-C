#include<stdio.h>
	
int main()	
{	
	enum MainColars{
		Red,
		Blue,
		Yellow
	};
	
enum MainColars pixel;
pixel=Blue;

if(pixel==Red)
	printf("Red pixel\n");
else if(pixel=Blue)
	printf("Blue pixel\n");
else
	printf("Yellow pixel");
	
return 0;	
}
