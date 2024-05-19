#include<stdio.h>

float kareal(float a );

int main(){
	
	int sayac;
	for(sayac=1; sayac<=10; sayac++)
	{
		printf("sayi :%d karesi %f\n" ,sayac, kareal(sayac));
	}
		
}

float kareal(float a){
	
	return a*a;
}
