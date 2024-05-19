#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *start;
struct node *temp;
struct node *q;

void sonaEkle(int veri){  //sona ekleme fonksiyonu yazdýk
 
 
 struct node *eklenecek=NULL;//eklenecek dügümü atadýk yer ayýrmadýðýmýz için degeri nul
 eklenecek=(node*)malloc(sizeof(node));//yer ayýrdýk
 
 eklenecek->data=veri;//eklenecek veriyi dugume attýk
 eklenecek->next=NULL;

}

void reversedList()
{
	struct node *oldnode;
	q=start;
	while(q!=NULL)
	{
		temp= q->next;
		q=oldnode->next;
		oldnode=q;
		q=temp;
	}
	start=oldnode;
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

int main()
{

int secim,n;
while(1==1){

printf("secim giriniz: *\ 1-sonaekle\n 2-listeyi ters cevir\n");
scanf("%d" ,&secim);
switch(secim)
{
	case 1:
		printf("sona eleman giriniz:");
		scanf("%d",&n);
		sonaEkle(n);
		yazdir();
		break;

	case 2:
		reversedList();
		yazdir();
		break;
}



}
}

