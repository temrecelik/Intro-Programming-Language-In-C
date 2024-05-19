#include<stdio.h>

int main()
{
	int elm;
	int month[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int *ptr;
	int x ,y;
	ptr = month; //Dizinin ilk eleman�n�n yani month[0] �n adresini pointere atad�k.
				//Bu i�lemden sonra pointeri dizi gibi kullabiliriz;
				//mesela; month[3]=ptr[3]=4 ya da month[11]=ptr[11]=12
	
	
	printf("1. yazd�rma �slem�: %d\n" ,ptr[3]); //>>ptr pointeri art�k diziyi tutu�u i�in dizinin month[3] eleman�n� yani 4 � yazar
	
	printf("2. yazd�rma �slem�:%d\n" ,ptr); //->E�er direk pointeri yazd�r�rsak dizinin birinci eleman� olan month[0] �n adresini yazar
	printf("3. yazd�rma �slem�:%d\n" ,*ptr);//->pointeri y�ld�z�yla kullan�rsak dizinin ilk eleman�n�n degerini yani  month[0]=1 i yazar
	
	
	
	ptr = month+3; //Bu i�lem ile pointer month dizisinin month[3] eleman�n�n adresini ula��r
				  //3-0=3 adres 3 eleman yer de�i�tirir integer dizide her eleman 4 byte kaplad��� i�in adres 4x3=12 artar.
	
	printf("4. yazd�rma �slem�:%d\n" ,ptr);//month[3] eleman�n adresi month[0] dan 12 birim fazla;
	
	
	printf("5. yazd�rma �slem�:%d\n" ,*ptr);//adres hemen yukar�da 3 eleman yerde�i�tirdi�i i�in art�k ptr[0] 1 yerine 3 eleman �tedekini yani 4 � yazacakt�r
				
	printf("6. yazd�rma �slem�:%d\n" ,month[0]);//Ancak dizi yine kendi indeksindeki elemanlar�n� yazar yani hala month[0]=1 dir
	
	x = *(ptr+2); //pointer dizinin 3 eleman ilerisinin adresini tuttu�u i�in bu i�lem ile x =month[3+2]=month[5]=6 olur
	y = *(month+2); //Yukar�dakini pointer yerine dizi ismiyle yaparsak pointerin adresinin ne oldu�una bak�lmaks�z�n y=month[2] olur.
	
	printf("7. yazd�rma �slem�:%d\n", x);
	printf("8. yazd�rma �slem�:%d\n", y);
	
	
	
	
	
	
	ptr = month; //a�ag�daki �rnek i�in kar���kl�k olmas�n diye ptr ye dizin ilk eleman�n adresini att�m;
	int a;
	a = (ptr+2)[2];  //Bu i�lem ptr[2+2] <ikisini toplam�yla> yani ptr[4] temsil eder.Yani a y� yazd�r�rsak month[4]=5 i yazacakt�r
	printf("9. yazd�rma �slem�:%d\n" ,a);
	
	
	
	x = *(ptr+2); //pointer� kullanarak bu i�lemi yaparsak pointerde dizinin ilk elam�n�n adresi old�u i�in month[0+2] den x= month[2] olur
	y = *(month+2);//Direk dizinin ismiyle bu i�lemi yaparsak yaparsak y = month[2] olur
	
	printf("10. yazd�rma �slem�:%d\n", x);
	printf("11. yazd�rma �slem�:%d\n", y);
}
