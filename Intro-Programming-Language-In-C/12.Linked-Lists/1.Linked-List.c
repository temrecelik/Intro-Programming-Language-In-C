#include<stdio.h>
#include<stdlib.h>
//basa eleman ekleme;

struct node{
	int data;
	struct node *next;
};

struct node *start;
struct node *q;

basaEkle(int veri){


struct node *eklenecek=NULL;
eklenecek=(node*)malloc(sizeof(node));
eklenecek->data=veri;
eklenecek->next=start;
start=eklenecek;
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
		basaEkle(n);
		yazdir();
		i++;	
		return 0;		
	}
}

	
