#include <stdio.h>
int main()
{
	float Midterm,Final,Grade;
	int StudentNo;
	
	printf("Enter Student No :");
	scanf("%d" ,&StudentNo);
	
	printf("Enter Midterm Grade :");
	scanf("%f" ,&Midterm);
	
	printf("Enter Final Grade :");
	scanf("%f" ,&Final);
	
	Grade=(Midterm * 4) / 10 + (Final * 6) / 10;
	
	printf("Student No: %d \n Grade: %.2f" ,StudentNo,Grade);

}
