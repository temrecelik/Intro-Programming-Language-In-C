#include<stdio.h>
#include<stdlib.h>

struct ogrenci{
	int no;
	char adi[40];
	int vize,final;
	struct ogrenci *sonraki;
	
};
typedef struct ogrenci dugum;
dugum *head, *yeniDugum , *oncekiDugum, *enBasarili;

void ogrenciListeOlustur()
{
	int n,k;
	printf("Kac elemanli liste olusturacaksin");
	scanf("%d" ,&n);
	
	for(k=0;k<n;k++){
		if(k==0){
		
		yeniDugum=(dugum*)malloc(sizeof(dugum));
		head=yeniDugum; }
		else
		{
			yeniDugum->sonraki=(dugum*)malloc(sizeof(dugum));
			yeniDugum=yeniDugum->sonraki;
		}
		
		printf("Ogrenci no:"); scanf("%d" ,&yeniDugum->no);
		printf("ogrenci adi:"); scanf("%s" ,yeniDugum->adi);
		printf("Ogrenci vize:"); scanf("%d" ,&yeniDugum->vize);	
		printf("Ogrenci final:"); scanf("%d" ,&yeniDugum->final);
	}
	yeniDugum->sonraki=NULL;
}
void ogrenciListeleme()
{
	double donemNotu=0;
	dugum *p;
	p=head;
	while(p!=NULL)
	{
		printf("**************************\n");
		printf("Ogrenci no:%d\t",p->no);
		printf("Ogrenci adi:%s\t",p->adi);
		printf("Ogrenci vize:%d\t",p->vize);
		printf("Ogrenci final:%d\t",p->final);
		donemNotu=p->vize*0.4 + p->final*0.6;
		printf("donem notu: %.2f\t",donemNotu);
		p=p->sonraki;
	}
}

int main()
{
	ogrenciListeOlustur();
	ogrenciListeleme();
}

