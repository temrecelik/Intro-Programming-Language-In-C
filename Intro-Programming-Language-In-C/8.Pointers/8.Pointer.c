//Pointer i�lemleri;
#include<stdio.h>

int main()
{
	int i = 5 , *p;
	
	p = &i;
	
	printf("p pointerinin ilk tuttugu adres : %d\n" ,p);
	
	(*p)++;//Bu i�lem adreste tutalan eleman�n de�erini  1 art�r�r.(* SEMBOLU VAR UNUTMA E�ER OLMASAYDI KARAKTER T�P�N�N BOYUTU KADAR ARTIRIRDI) 
	printf("p pointerinin tuttugu ilk adresdeki elemanin degisen ilk degeri: %d\n", *p);
	
	
	(*p) = 7;//Bu i�lem pointer�n tuttu�u adresteki elam�n� de�erin 7 yapar
	printf("p pointerinin tuttugu ilk adresdeki elemanin degisen ikinci degeri: %d\n", *p);
	
	
	p++; //bu ��lem pointerin tuttu�u adresi de�i�keninin boyutunun byte cinsi kadar art�r�r.(integer 4 byte artar)
	printf("p pointeririnin tuttugu ikinci adres: %d\n" ,p);
	
	//NOT: YUKARDAK� ��LEM �LE PO�NTER�N TUTTU�U ADRES� DE���T�R�RSEK ARTIK P PO�NTER� � DE���KEN�N ADRES�N� TUTMAYI BIRAKIR
	//VE O ADRESTE TUTULA OLAN DE�ER� YAZAMAZ
	
	
	printf("pointerin adresi degistikten sonraki tuttugu deger :%d\n" ,*p);
	//normalde en son i nin adresindeki degeri 7 yapt�k ancak pointer�n yeni adresinde deger olmad��� i�in direk adresini yaz�yor
	
	*(p+2) = 5;//bu i�lem ile pointer tuttugu adresin 4*2=8 fazlas�ndaki adresin degerini 5 yapar
	p=p+2;	//Bu i�lem ile pointerin tuttug adresin 8 fazlas�na gideriz
	printf("p pointeririnin tuttugu adresin 8 fazlasindaki adres: %d\n" ,p);
	printf("pointerin 8 fazlasindaki adresin tuttugu deger :%d\n" ,*p);
}
