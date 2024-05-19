#include<stdio.h>
#include<stdlib.h>
 //ba�l� listede sona eleman ekleme 
 
 struct node{ //node etiketli bir struct olu�turduk
 	int data;
 	
 	struct node *next;//sonraki d�g�me ge�mek i�in next pointer� giridk
 	
 };
 
 struct node *start=NULL;//bir tane ba�lang�� degerini tutacak d�g�m atad�k ve null verdik
 struct node *q=NULL;//baslang�� degerini degistermemek i�in start� bu q dugumune atamak i�i bunu tan�mlad�k
 
 void sonaEkle(int veri){  //sona ekleme fonksiyonu yazd�k
 
 
 struct node *eklenecek=NULL;//eklenecek d�g�m� atad�k yer ay�rmad���m�z i�in degeri nul
 eklenecek=(node*)malloc(sizeof(node));//yer ay�rd�k
 
 eklenecek->data=veri;//eklenecek veriyi dugume att�k
 eklenecek->next=NULL;//son dugumden sonraki yere null degerini girdl
 
 if(start==NULL)//baslang�c degeri s�f�rsa
 
 start=eklenecek;//ilk eklenecek deger baslang�c degeri olsun
 
 else  //degilse
 {
 
 q=start;//start degerini degistirmemek i�in start� q ya atad�k
 while(q->next!=NULL) //sona yani null degerini ula��lmad�g� s�rece
 {
 	q=q->next; //q yu bir art�rd�k art�k d�ng�n�n sonunda q art�k son dugumu temsil edecek
 }
 q->next=eklenecek; // q son dugumdu son dugumun nextinide yeni dugumu ekledik
}
}
void yazdir() //yazdirma fonksiyonu ile yazd�rma i�lemi yaptik
{
	q=start;
	while(q->next!=NULL){
	
	printf("%d->" ,q->data);
	q=q->next;
	}
	printf("%d>\n",q->data);
}
	
int main()//ana fonksiyon ile de elemanlar� istedik
{
	int n,i=1;
	while(1==1)
	{
		printf("%d. veriyi giriniz:",i);
		scanf("%d" ,&n);
		sonaEkle(n);
		yazdir();
		i++;			
	}
return 0;	
	
}


 
 
