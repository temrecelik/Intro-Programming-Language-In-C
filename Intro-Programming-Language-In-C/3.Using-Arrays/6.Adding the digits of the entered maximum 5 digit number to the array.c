#include<stdio.h>

int main()
{
int Number , digit , i = 0;
printf("Enter a Number:");
scanf("%d" , &Number);
int Array[5];

if(Number < 100000)
{
	while(Number>0){
	
		digit = Number % 10;
		Array[i] = digit;
    	printf("Array[%d] = %d\n" ,i,Array[i]);
		Number = Number / 10;
		i++;
	}
}	
		

else{
	printf("The number you entered is more than 5 digits");
	}
}

