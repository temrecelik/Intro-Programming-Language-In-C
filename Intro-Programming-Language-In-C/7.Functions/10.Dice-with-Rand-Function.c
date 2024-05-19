#include<stdio.h>
#include<stdlib.h>

int main()
{
int
sayi,
k1 = 0,
k2 = 0,
k3 = 0, 
k4 = 0,
k5 = 0,
k6 = 0;

for(int i = 0; i <6000; i++){
	
	sayi = 1 + rand() % 6;
	
	switch(sayi){
		
		case 1:
			++k1;
			break;	
		case 2:
			++k2;
			break;
		case 3:
			++k3;
			break;
		case 4:
			++k4;
			break;
		case 5: 
			++k5;
			break;
		case 6:
			++k6;
			break;
	}}
	
	printf("%s----%s\n" ,"Sayi" ,"AtimSayisi");
	printf("1%13d\n" ,k1);
	printf("2%13d\n" ,k2);	
	printf("3%13d\n" ,k3);	//13 sadece boþluk açýyor 13 olmazsa atimsayisi ile sayi bitiþik olur çirkin durur	
	printf("4%13d\n" ,k4);		
	printf("5%13d\n" ,k5);		
	printf("6%13d\n" ,k6);		
			
			
			
return 0;			
	}
	



