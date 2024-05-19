/*
***fseek fonksiyonu***
>dosyadaki konumu belirten pointerin konumunu ayarlar.

>fseek(pointer,offset,symbolik_constant);
	-pointer :dosyayý gösteren pointer
	-offset : dosyadaki konumu gösteren pointer (ilk pozisyon 0)
	-symbolice_constant :dosyanýn neresinde okumaya baþlayacaðýný gösterir
			-->SEEK_SET :dosyanýn basýndan basla
			-->SEEK_CUR :dosyanýn mevcut bulunan konumundan baþla
			-->SEEK_END :dosyanýn sonundan basla
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
