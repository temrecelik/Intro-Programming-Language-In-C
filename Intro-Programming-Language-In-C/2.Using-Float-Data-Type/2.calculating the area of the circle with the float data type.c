#include<stdio.h>	
#include<conio.h>

#define P 3.14

int main(){



float r,result;
	
	printf("Enter Radius of Circle: ");
	scanf("%f" ,&r);



	result= P * r *r;
	printf("Area of circle is : %f" ,result);
	
	
}
