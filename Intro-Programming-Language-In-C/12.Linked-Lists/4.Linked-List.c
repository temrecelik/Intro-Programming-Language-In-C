#include<stdio.h>
#include<stdlib.h>
 //baðlý listede sona eleman ekleme 
 
 struct node{ //node etiketli bir struct oluþturduk
 	int data;
 	
 	struct node *next;//sonraki dügüme geçmek için next pointerý giridk
 	
 };
 
 struct node *start=NULL;//bir tane baþlangýç degerini tutacak dügüm atadýk ve null verdik
 struct node *q=NULL;//baslangýç degerini degistermemek için startý bu q dugumune atamak içi bunu tanýmladýk
 
 void sonaEkle(int veri){  //sona ekleme fonksiyonu yazdýk
 
 
 struct node *eklenecek=NULL;//eklenecek dügümü atadýk yer ayýrmadýðýmýz için degeri nul
 eklenecek=(node*)malloc(sizeof(node));//yer ayýrdýk
 
 eklenecek->data=veri;//eklenecek veriyi dugume attýk
 eklenecek->next=NULL;//son dugumden sonraki yere null degerini girdl
 
 if(start==NULL)//baslangýc degeri sýfýrsa
 
 start=eklenecek;//ilk eklenecek deger baslangýc degeri olsun
 
 else  //degilse
 {
 
 q=start;//start degerini degistirmemek için startý q ya atadýk
 while(q->next!=NULL) //sona yani null degerini ulaþýlmadýgý sürece
 {
 	q=q->next; //q yu bir artýrdýk artýk döngünün sonunda q artýk son dugumu temsil edecek
 }
 q->next=eklenecek; // q son dugumdu son dugumun nextinide yeni dugumu ekledik
}
}
void yazdir() //yazdirma fonksiyonu ile yazdýrma iþlemi yaptik
{
	q=start;
	while(q->next!=NULL){
	
	printf("%d->" ,q->data);
	q=q->next;
	}
	printf("%d>\n",q->data);
}
	
int main()//ana fonksiyon ile de elemanlarý istedik
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


 
 
