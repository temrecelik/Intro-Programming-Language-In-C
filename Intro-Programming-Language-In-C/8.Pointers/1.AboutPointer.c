#include<stdio.h>

int main(){
	
	int i;
	int *iptr; //pointer atama iþlemi iptr sadece isim *iptr yerine *p ve ya *t gibi farklý þeylerde gelebilir
	i = 5;
	iptr = &i; // & iþareti kullanarak deðiþkeni pointera atarsak pointer deðiþkenin adresini alýr ve deðerini bilir
	
	printf("i nin adresi : %p\n" , &i);// %p kullanarak deðiþkenin adresini yazdýrýrýz
	printf("iptr'nin tuttugu adres degeri : %p\n" ,iptr);//yukarýda deðiþkenin adresini pointera söylediðimiz için deðiþkenin adresini pointer ile yazdýrabiliriz
	
	printf("i  nin degeri : %d\n" ,i);
	printf("*iptr degeri %d\n" ,*iptr); //deðiþkenin adresini iptr = &i iþlemiyle pointera attýktan sonra pointerý yýldýzlý(*iptr) þekilde
										//yazdýrýrsak deðiþkenin tutulduðu adresteki deðeri yazar
getchar();
return 0;	
}
