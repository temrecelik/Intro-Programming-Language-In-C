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
		struct birthDate date; //person_data etiketli strcutun içinde birthdate etiketli struct'tan date isimli bir nesne tanımladık 
	};																			//bu nesne gün ay yıl degiskenlerini tutar					
	
	struct person_data *ptr; //person_date etiketli structan bir tane ptr adlı pointer nesnesi tanimladik 
	struct person_data person[3]={ {"ali"  , 190 , {21,11,1978}},//ve bir tane de person isimli 3 elemanli dizi nesnesi tanimladik ve içinde tuttugu degiskenlere ilk degerini verdik
	
								   {"veli" , 173 , {30,9,1987}},
								   {"cenk" , 185 ,  {25,8,1990}} };
								   
	for(i=0, ptr=&person[0]; ptr<=&person[2];ptr++,i++)
	//for döngüsü ile person dizi nesnenin adresini ptr pointerina atmaya basladık
	
	{
		printf("Kayit no:%d %\n" ,(i+1));
		printf("Name:%s\n",ptr->name);     //yazdırma işlemlerini pointere göre yaptık.
		printf("length:%d\n",ptr->length);
		printf("birthday:%d/%d/%d\n",ptr->date.day ,ptr->date.month ,ptr->date.year);
		printf("\n");
		
	}							   	
								   
}
