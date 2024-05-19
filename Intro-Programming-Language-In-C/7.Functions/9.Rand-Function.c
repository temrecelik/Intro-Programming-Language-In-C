#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int i;
	for(i = 1; i <=20; i++)
	{
		printf("%10d" , 1+(rand() % 6));// bir ile 6 arasýnda sayý üretiliyor.
		
		if(i % 5 == 0) //if her 5 yazma iþleminde bir satýr atlatsýn  diye konulmuþ
		{
			printf("\n");
		}
	}
	return 0;
}
