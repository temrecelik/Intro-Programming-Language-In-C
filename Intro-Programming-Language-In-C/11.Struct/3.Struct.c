#include<stdio.h>
#include<string.h>
 //struct da etiketleme i�lemi
 int main(void)
 {
 	struct person_Data{ //strcut tan�mlarken struct tan sonraki person_Data etikelleme i�lemidir.
 		char name[40]; //bu i�lemden sonra degisken tan�mlarken tekrar struct parantezleri i�inde ki�i(nesne) tan�mlam�za gerek yoktur
 		int length;	   //yani ayr�ca struct parantezleri d���nda ki�i(nesne) tan�mlaybilmemizi saglar		
	 };
	 
	 struct person_Data person; //g�r�ld�g� gibi" struct etiket ki�i(nesne); " ifadesi ile ki�i(nesne) tan�mlaybildik
	 
	
	printf("Enter person1 name:");
	scanf("%s" ,person.name); //burada direk sonradan tan�mlad���m�z ki�(nesne).degisken ile yazd�rma ya da kullan�can veri isteme i�lemi yapabiliriz
	printf("%s",person.name );
	printf("Enter person1 length:");
	scanf("%d"  ,&person.length);
	printf("%d" ,person.length);
		 
	  }
