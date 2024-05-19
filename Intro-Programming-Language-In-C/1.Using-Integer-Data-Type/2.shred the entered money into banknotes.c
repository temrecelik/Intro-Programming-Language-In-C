#include <stdio.h>

int main()
{
	
  int Money , Count100 = 0 , Count50 = 0 , Count20 = 0 , Count10 = 0;
  
	printf("Enter Total Money:");
	scanf("%d" ,&Money);
	
	if(Money >= 100)
	{
		Count100 = Money / 100;
		Money = Money - Count100 * 100;
	}	
	
	if(Money >= 50)
	{
		Count50 = Money / 50;
		Money = Money - Count50 * 50;
	}
	
	if(Money >= 20)
	{
	Count20 = Money / 20;
	Money = Money - Count20 * 20;
	}
	
	if(Money >= 10)
	{
	Count10 = Money / 10;
	Money = Money - Count10*10;
	}
	
  
	printf("Number of 100: %d \nNumber of 50: %d \nNumber of 20: %d \nNumber of 10: %d \n"
	,Count100,Count50,Count20,Count10);
			
			
			
}




	
	
	
