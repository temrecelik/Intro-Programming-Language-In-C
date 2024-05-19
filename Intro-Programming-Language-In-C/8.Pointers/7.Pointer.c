//pointera bir değişkenin adresini atadıktan sonra pointerın değerini bir artırarsak adresin degeri o değişkenin
//tipi kaç byte ise o kadar artar

#include<stdio.h>

int main()
{
	int i;
	int *ip;
	ip = &i;
	printf("p nin gosterdigi adres : %d\n" ,ip);//i integer oldğu için 4byte yer kaplar adres 4 birim artar
	ip++;
	printf("p nin gosterdğigi yeni adres: %d\n",ip);
	
	double y;
	double *yp;
	
	yp = &y;
	printf("yp nin gosterdigi adres : %d\n" ,yp);// y double olduğu i.in 8 byte yer kaplar pointer 1 artınca adres 8 artar.
	yp++;				//double olmasına rağmen adrese bakarken %d kullanılıyor
	printf("yp nin gosterdigi yeni adres :%d" ,yp);
	
getchar();
return 0;
	
}
