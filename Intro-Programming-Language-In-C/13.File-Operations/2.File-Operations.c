#include<stdio.h>
int main(void)
{
	int hesapNo;
	char ad[30];
	double bakiye;
	
	FILE *mfptr; // file ile bir dosya pointeri olu�turduk
	mfptr =fopen("musteriLERR.dat" ,"w"); //fopen fonksiyonun ilk parametresi dosyan�n adi ikincisi dosyan�n a��l�� modu bu fonksiyonu dosya poitnerina atad�k
	if(mfptr==NULL )//dosya a��lmazsa pointer NULL d�nd�r�r
		printf("Dosya a��lamad�\n");
		
	else
	printf("hesap no, isim ve bakiye giriniz\n");							//buras� normal c programlama
	printf("veri girisini bitirmek icin EOF giriniz ?"); //EOF=CTRL+Z		//kullan�can 3 degisken ald�k
	scanf("%d%s%lf" ,&hesapNo,ad,&bakiye);									//ctr+z ile dosyaya yazma i�lemi ba�l�ycak
	
	while(!feof(stdin))//feof fonksiyonu d�ng�de kullan�l�yor dosya i�ine yazma ba�l�yor
	{
		fprintf(mfptr,"%d %s %2.lf",hesapNo,ad,bakiye); //fprintf dosya pointerini parametre olarak al�r daha sonra degiskenler yaz�l�r
		printf("?");
		scanf("%d%s%lf",&hesapNo,ad,&bakiye); //scanf ile degiskenler istenir
	}
	fclose(mfptr); //dosya kapatma
return 0;			 
}

