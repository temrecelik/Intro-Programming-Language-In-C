#include<stdio.h>
//structlari pointer kullanarak erismek;
int main()
{
	int i;
	
	struct birthDate //birthday etiketli bir struct tanimladik
	{
		int day;
		int month;
		int year;
	};
	
	struct person_data{ //person_data etiketli bir struct tanimladik
		char name[40];
		int length;
		struct birthDate date; //person_data etiketli strcutun i�inde birthdate etiketli struct'tan date isimli bir nesne tan�mlad�k 
	};																			//bu nesne g�n ay y�l degiskenlerini tutar					
	
	struct person_data *ptr; //person_date etiketli structan bir tane ptr adl� pointer nesnesi tanimladik 
	struct person_data person[3]={ {"ali"  , 190 , {21,11,1978}},//ve bir tane de person isimli 3 elemanli dizi nesnesi tanimladik ve i�inde tuttugu degiskenlere ilk degerini verdik
	
								   {"veli" , 173 , {30,9,1987}},
								   {"cenk" , 185 ,  {25,8,1990}} };
								   
	for(i=0, ptr=&person[0]; ptr<=&person[2];ptr++,i++)
	//for d�ng�s� ile person dizi nesnenin adresini ptr pointerina atmaya baslad�k
	
	{
		printf("Kayit no:%d %\n" ,(i+1));
		printf("Name:%s\n",ptr->name);     //yazd�rma i�lemlerini pointere g�re yapt�k.
		printf("length:%d\n",ptr->length);
		printf("birthday:%d/%d/%d\n",ptr->date.day ,ptr->date.month ,ptr->date.year);
		printf("\n");
		
	}							   	
								   
}
