#include<stdio.h>

int main(){
	
	int i;
	int *iptr; //pointer atama i�lemi iptr sadece isim *iptr yerine *p ve ya *t gibi farkl� �eylerde gelebilir
	i = 5;
	iptr = &i; // & i�areti kullanarak de�i�keni pointera atarsak pointer de�i�kenin adresini al�r ve de�erini bilir
	
	printf("i nin adresi : %p\n" , &i);// %p kullanarak de�i�kenin adresini yazd�r�r�z
	printf("iptr'nin tuttugu adres degeri : %p\n" ,iptr);//yukar�da de�i�kenin adresini pointera s�yledi�imiz i�in de�i�kenin adresini pointer ile yazd�rabiliriz
	
	printf("i  nin degeri : %d\n" ,i);
	printf("*iptr degeri %d\n" ,*iptr); //de�i�kenin adresini iptr = &i i�lemiyle pointera att�ktan sonra pointer� y�ld�zl�(*iptr) �ekilde
										//yazd�r�rsak de�i�kenin tutuldu�u adresteki de�eri yazar
getchar();
return 0;	
}
