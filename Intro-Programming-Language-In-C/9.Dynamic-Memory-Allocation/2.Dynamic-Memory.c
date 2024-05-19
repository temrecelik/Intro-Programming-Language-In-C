#include <stdio.h>

void increment(int *);

int main(void)
{
	int i;
	i = 5;
	printf("oncesi :%d\n" ,i);
	increment(&i);    //i deðiþkeninin adresini fonksiyondaki pointýra gönderdiðimiz için fonksiyonda yapýlan iþlem deðiþkenin 
	printf("%d" ,i); //degerini degistirir.
	
	
return 0;	
}

void increment(int *k)
{
	(*k)++;
}
