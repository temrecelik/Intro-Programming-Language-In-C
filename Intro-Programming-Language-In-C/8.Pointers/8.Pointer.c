//Pointer iþlemleri;
#include<stdio.h>

int main()
{
	int i = 5 , *p;
	
	p = &i;
	
	printf("p pointerinin ilk tuttugu adres : %d\n" ,p);
	
	(*p)++;//Bu iþlem adreste tutalan elemanýn deðerini  1 artýrýr.(* SEMBOLU VAR UNUTMA EÐER OLMASAYDI KARAKTER TÝPÝNÝN BOYUTU KADAR ARTIRIRDI) 
	printf("p pointerinin tuttugu ilk adresdeki elemanin degisen ilk degeri: %d\n", *p);
	
	
	(*p) = 7;//Bu iþlem pointerýn tuttuðu adresteki elamýný deðerin 7 yapar
	printf("p pointerinin tuttugu ilk adresdeki elemanin degisen ikinci degeri: %d\n", *p);
	
	
	p++; //bu Ýþlem pointerin tuttuðu adresi deðiþkeninin boyutunun byte cinsi kadar artýrýr.(integer 4 byte artar)
	printf("p pointeririnin tuttugu ikinci adres: %d\n" ,p);
	
	//NOT: YUKARDAKÝ ÝÞLEM ÝLE POÝNTERÝN TUTTUÐU ADRESÝ DEÐÝÞTÝRÝRSEK ARTIK P POÝNTERÝ Ý DEÐÝÞKENÝN ADRESÝNÝ TUTMAYI BIRAKIR
	//VE O ADRESTE TUTULA OLAN DEÐERÝ YAZAMAZ
	
	
	printf("pointerin adresi degistikten sonraki tuttugu deger :%d\n" ,*p);
	//normalde en son i nin adresindeki degeri 7 yaptýk ancak pointerýn yeni adresinde deger olmadýðý için direk adresini yazýyor
	
	*(p+2) = 5;//bu iþlem ile pointer tuttugu adresin 4*2=8 fazlasýndaki adresin degerini 5 yapar
	p=p+2;	//Bu iþlem ile pointerin tuttug adresin 8 fazlasýna gideriz
	printf("p pointeririnin tuttugu adresin 8 fazlasindaki adres: %d\n" ,p);
	printf("pointerin 8 fazlasindaki adresin tuttugu deger :%d\n" ,*p);
}
