//structlarda dizilerin kullan�m�
#include<stdio.h>
int main(void)
{
	int i;
	
	struct birthday{  //birthday adli bir struct etiketiyle struct tan�mladik
		int day;
		int month;
		int year;
		
	};
	
	struct person_data{ //person_data etiketiyle yeni bir struct tan�mlad�k
		char name[40];
		int length;
		
		struct birthday date;//struct i�inde struct tanimladik date de bir nesne ve i�inde yukaridaki structta g�r�ld�g� gibi ay-g�n-y�l tutacak
		
	};
	// person_data etiketli structdan person adli �� elemanl� bir dizi nesnesi tanimlaniyor ve baslang�� degerleri giriliyor
	struct person_data person[3]={ {"ali"  , 190 , {21,11,1978}},
								   {"veli" , 173 , {30,9,1987}},
								   {"cenk" , 185 ,  {25,8,1990}} };
								   
for(i=0; i<3; i++){ //daha sonra normal dizilerdeki gibi yazd�rma i�lemi
	printf("Kayit numarasi:%d\n" ,(i+1));
	printf("name:%s\n", person[i].name);
	printf("length:%d\n",person[i].length);
	printf("birthday: %d/%d/%d\n" ,person[i].date.day,person[i].date.month,person[i].date.year);
	printf("\n");				//�nceden bahsetmi�tik struct i�inde struct yazdirirken
}								//birinciStrcut�nNesnesi.Ik�nc�StructunNesnesi.degisken seklinde olmalidir
return 0;								   
}
