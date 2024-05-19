#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

int kare(int);
	
int main(void)
{	
	
	int (*islem)(int);
	int i;
	printf("\n Sayiyi giriniz : ");
	scanf("%d" ,&i);
	
	islem = kare;
	printf("Sonuc: %d\n" ,islem(i));
}	
	int kare(int k)
{
	return k*k;
	
}
	
