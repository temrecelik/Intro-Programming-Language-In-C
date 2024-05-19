#include<stdio.h>
#include<string.h>
 //struct da etiketleme iþlemi
 int main(void)
 {
 	struct person_Data{ //strcut tanýmlarken struct tan sonraki person_Data etikelleme iþlemidir.
 		char name[40]; //bu iþlemden sonra degisken tanýmlarken tekrar struct parantezleri içinde kiþi(nesne) tanýmlamýza gerek yoktur
 		int length;	   //yani ayrýca struct parantezleri dýþýnda kiþi(nesne) tanýmlaybilmemizi saglar		
	 };
	 
	 struct person_Data person; //görüldügü gibi" struct etiket kiþi(nesne); " ifadesi ile kiþi(nesne) tanýmlaybildik
	 
	
	printf("Enter person1 name:");
	scanf("%s" ,person.name); //burada direk sonradan tanýmladýðýmýz kiþ(nesne).degisken ile yazdýrma ya da kullanýcan veri isteme iþlemi yapabiliriz
	printf("%s",person.name );
	printf("Enter person1 length:");
	scanf("%d"  ,&person.length);
	printf("%d" ,person.length);
		 
	  }
