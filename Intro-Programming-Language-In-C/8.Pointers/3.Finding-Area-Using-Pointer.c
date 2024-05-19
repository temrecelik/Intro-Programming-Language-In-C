#include<stdio.h>
#include<stdlib.h>
 int fonk(int i , int j , int* cevre , int * alan);
 
 int main()
 {
 	int a,
 	 alan,
 	cevre,
 		b;
 	
	 printf("Birinci kenari giriniz:");
	 scanf("%d" ,&a);
	 printf("Ikinci kenari giriniz :");
	 scanf("%d" ,&b);
	 
	 fonk( a , b , &cevre , &alan);
	 
	 printf("cevre :%d -- alan :%d" ,cevre , alan);
	  	
 		
 }
 
 
int fonk(int i , int j , int *cevre , int *alan )
{
	*cevre= 2*(i+j);
	*alan=i*j;
}
