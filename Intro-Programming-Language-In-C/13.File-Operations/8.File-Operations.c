#include<stdio.h>

struct musteri{
	int hesapno;
	char soyad[25];
	char ad[20];
	double bakiye;
	
};

int main(void)
{
	int i;
	struct musteri bosmusteri{0,"","",0.0};
	FILE *myptr;
	myptr=fopen("musteri.dat" ,"w");
	
	for(i=1;i<100;i++)
	{
		fwrite(&bosmusteri,sizeof(struct musteri),1,myptr);
	}
	fclose(myptr);
}
