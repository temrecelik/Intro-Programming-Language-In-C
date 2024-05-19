#include<stdio.h>
int main(void)
{
	int hesapNo;
	char ad[30];
	double bakiye;
	
	FILE *mfptr; // file ile bir dosya pointeri oluþturduk
	mfptr =fopen("musteriLERR.dat" ,"w"); //fopen fonksiyonun ilk parametresi dosyanýn adi ikincisi dosyanýn açýlýþ modu bu fonksiyonu dosya poitnerina atadýk
	if(mfptr==NULL )//dosya açýlmazsa pointer NULL döndürür
		printf("Dosya açýlamadý\n");
		
	else
	printf("hesap no, isim ve bakiye giriniz\n");							//burasý normal c programlama
	printf("veri girisini bitirmek icin EOF giriniz ?"); //EOF=CTRL+Z		//kullanýcan 3 degisken aldýk
	scanf("%d%s%lf" ,&hesapNo,ad,&bakiye);									//ctr+z ile dosyaya yazma iþlemi baþlýycak
	
	while(!feof(stdin))//feof fonksiyonu döngüde kullanýlýyor dosya içine yazma baþlýyor
	{
		fprintf(mfptr,"%d %s %2.lf",hesapNo,ad,bakiye); //fprintf dosya pointerini parametre olarak alýr daha sonra degiskenler yazýlýr
		printf("?");
		scanf("%d%s%lf",&hesapNo,ad,&bakiye); //scanf ile degiskenler istenir
	}
	fclose(mfptr); //dosya kapatma
return 0;			 
}

