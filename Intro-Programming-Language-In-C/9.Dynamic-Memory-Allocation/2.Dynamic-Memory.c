#include <stdio.h>

void increment(int *);

int main(void)
{
	int i;
	i = 5;
	printf("oncesi :%d\n" ,i);
	increment(&i);    //i de�i�keninin adresini fonksiyondaki point�ra g�nderdi�imiz i�in fonksiyonda yap�lan i�lem de�i�kenin 
	printf("%d" ,i); //degerini degistirir.
	
	
return 0;	
}

void increment(int *k)
{
	(*k)++;
}
