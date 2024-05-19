/*
***fread fonksiyonu***

-dosyadan belirtilen kadar bayt okuyup hafýzaya atar.

-gosterim þekli;
	>fread(&client,sizeof(struct clientData),1,myptr);
	
-birdem fazla sabit uzunlukta dizi elamaný okuyabilir.
-dizi gösteren pointer oluþturmak gerekir(ilk parametre)
-okunacak eleman sayýsýnýn belirtilmesi gerekir(3.parametrede)
*/
#include <stdio.h>

	struct musteri{
		int hesapno;
		char soyad[25];
		char ad[20];
		double bakiye;
	};
	int main()
	{
		struct musteri hesapbilgi={0,"","",0.0};
		FILE *myptr;
		myptr=fopen("musteri.dat" ,"r");
		printf("%d   %s    %s    %s\n" ,"hesapno" ,"soyad" ,"ad","bakiye");
		
		while(!feof(myptr))
	{
		fread(&hesapbilgi,sizeof(struct musteri),1,myptr);
		if(hesapbilgi.hesapno!=0)
			printf("%d    %s    %s    %f" ,hesapbilgi.hesapno,hesapbilgi.soyad,hesapbilgi.ad,hesapbilgi.bakiye);
 	}
	 fclose(myptr);	 
	}

