//structlarda dizilerin kullanımı
#include<stdio.h>
int main(void)
{
	int i;
	
	struct birthday{  //birthday adli bir struct etiketiyle struct tanımladik
		int day;
		int month;
		int year;
		
	};
	
	struct person_data{ //person_data etiketiyle yeni bir struct tanımladık
		char name[40];
		int length;
		
		struct birthday date;//struct içinde struct tanimladik date de bir nesne ve içinde yukaridaki structta görüldügü gibi ay-gün-yıl tutacak
		
	};
	// person_data etiketli structdan person adli üç elemanlı bir dizi nesnesi tanimlaniyor ve baslangıç degerleri giriliyor
	struct person_data person[3]={ {"ali"  , 190 , {21,11,1978}},
								   {"veli" , 173 , {30,9,1987}},
								   {"cenk" , 185 ,  {25,8,1990}} };
								   
for(i=0; i<3; i++){ //daha sonra normal dizilerdeki gibi yazdırma işlemi
	printf("Kayit numarasi:%d\n" ,(i+1));
	printf("name:%s\n", person[i].name);
	printf("length:%d\n",person[i].length);
	printf("birthday: %d/%d/%d\n" ,person[i].date.day,person[i].date.month,person[i].date.year);
	printf("\n");				//önceden bahsetmiştik struct içinde struct yazdirirken
}								//birinciStrcutınNesnesi.IkıncıStructunNesnesi.degisken seklinde olmalidir
return 0;								   
}
