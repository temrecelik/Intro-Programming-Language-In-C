//pointera bir de�i�kenin adresini atad�ktan sonra pointer�n de�erini bir art�rarsak adresin degeri o de�i�kenin
//tipi ka� byte ise o kadar artar

#include<stdio.h>

int main()
{
	int i;
	int *ip;
	ip = &i;
	printf("p nin gosterdigi adres : %d\n" ,ip);//i integer old�u i�in 4byte yer kaplar adres 4 birim artar
	ip++;
	printf("p nin gosterd�igi yeni adres: %d\n",ip);
	
	double y;
	double *yp;
	
	yp = &y;
	printf("yp nin gosterdigi adres : %d\n" ,yp);// y double oldu�u i.in 8 byte yer kaplar pointer 1 art�nca adres 8 artar.
	yp++;				//double olmas�na ra�men adrese bakarken %d kullan�l�yor
	printf("yp nin gosterdigi yeni adres :%d" ,yp);
	
getchar();
return 0;
	
}
