/*
***fseek fonksiyonu***
>dosyadaki konumu belirten pointerin konumunu ayarlar.

>fseek(pointer,offset,symbolik_constant);
	-pointer :dosyay� g�steren pointer
	-offset : dosyadaki konumu g�steren pointer (ilk pozisyon 0)
	-symbolice_constant :dosyan�n neresinde okumaya ba�layaca��n� g�sterir
			-->SEEK_SET :dosyan�n bas�ndan basla
			-->SEEK_CUR :dosyan�n mevcut bulunan konumundan ba�la
			-->SEEK_END :dosyan�n sonundan basla
*/
#include <stdio.h>
	
struct musteri{
	int hesapno;
	char soyad[25];
	char ad[20];
	double bakiye;
};	
int main(void)
{
	struct musteri hesapbilgi={0,"","",0.0};
	FILE *myftr;
	myftr=fopen("musteri.dat" ,"r+");

	printf("1-100 arasinda hesap numarasi giriniz:\n");
	scanf("%d" ,&hesapbilgi.hesapno);
	
	while(hesapbilgi.hesapno!=0)
	{
		printf("Soyad,ad,bakiye giriniz:\n");
		scanf("%s%s%d",hesapbilgi.soyad,hesapbilgi.soyad,&hesapbilgi.bakiye);
		
		fseek(myftr,(hesapbilgi.hesapno-1)*sizeof(struct musteri),SEEK_SET);
		fwrite(&hesapbilgi,sizeof(struct musteri),1,myftr);
	
	printf("-Veri girisini bitirmek icin 0 giriniz-\n");
	printf("1-100 arasinda hesap numarasi giriniz:\n");
	scanf("%d" ,&hesapbilgi.hesapno);
		
	}
	fclose(myftr);

	
}
