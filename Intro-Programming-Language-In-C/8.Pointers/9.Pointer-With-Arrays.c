#include<stdio.h>

int main()
{
	int elm;
	int month[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int *ptr;
	int x ,y;
	ptr = month; //Dizinin ilk elemanýnýn yani month[0] ýn adresini pointere atadýk.
				//Bu iþlemden sonra pointeri dizi gibi kullabiliriz;
				//mesela; month[3]=ptr[3]=4 ya da month[11]=ptr[11]=12
	
	
	printf("1. yazdýrma ýslemý: %d\n" ,ptr[3]); //>>ptr pointeri artýk diziyi tutuðu için dizinin month[3] elemanýný yani 4 ü yazar
	
	printf("2. yazdýrma ýslemý:%d\n" ,ptr); //->Eðer direk pointeri yazdýrýrsak dizinin birinci elemaný olan month[0] ýn adresini yazar
	printf("3. yazdýrma ýslemý:%d\n" ,*ptr);//->pointeri yýldýzýyla kullanýrsak dizinin ilk elemanýnýn degerini yani  month[0]=1 i yazar
	
	
	
	ptr = month+3; //Bu iþlem ile pointer month dizisinin month[3] elemanýnýn adresini ulaþýr
				  //3-0=3 adres 3 eleman yer deðiþtirir integer dizide her eleman 4 byte kapladýðý için adres 4x3=12 artar.
	
	printf("4. yazdýrma ýslemý:%d\n" ,ptr);//month[3] elemanýn adresi month[0] dan 12 birim fazla;
	
	
	printf("5. yazdýrma ýslemý:%d\n" ,*ptr);//adres hemen yukarýda 3 eleman yerdeðiþtirdiði için artýk ptr[0] 1 yerine 3 eleman ötedekini yani 4 ü yazacaktýr
				
	printf("6. yazdýrma ýslemý:%d\n" ,month[0]);//Ancak dizi yine kendi indeksindeki elemanlarýný yazar yani hala month[0]=1 dir
	
	x = *(ptr+2); //pointer dizinin 3 eleman ilerisinin adresini tuttuðu için bu iþlem ile x =month[3+2]=month[5]=6 olur
	y = *(month+2); //Yukarýdakini pointer yerine dizi ismiyle yaparsak pointerin adresinin ne olduðuna bakýlmaksýzýn y=month[2] olur.
	
	printf("7. yazdýrma ýslemý:%d\n", x);
	printf("8. yazdýrma ýslemý:%d\n", y);
	
	
	
	
	
	
	ptr = month; //aþagýdaki örnek için karýþýklýk olmasýn diye ptr ye dizin ilk elemanýn adresini attým;
	int a;
	a = (ptr+2)[2];  //Bu iþlem ptr[2+2] <ikisini toplamýyla> yani ptr[4] temsil eder.Yani a yý yazdýrýrsak month[4]=5 i yazacaktýr
	printf("9. yazdýrma ýslemý:%d\n" ,a);
	
	
	
	x = *(ptr+2); //pointerý kullanarak bu iþlemi yaparsak pointerde dizinin ilk elamýnýn adresi oldðu için month[0+2] den x= month[2] olur
	y = *(month+2);//Direk dizinin ismiyle bu iþlemi yaparsak yaparsak y = month[2] olur
	
	printf("10. yazdýrma ýslemý:%d\n", x);
	printf("11. yazdýrma ýslemý:%d\n", y);
}
