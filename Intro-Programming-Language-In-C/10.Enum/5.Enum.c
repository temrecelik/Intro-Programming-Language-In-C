#include <stdio.h>

enum gunler{
	
	pazartesi = 1,
	sali, //pazartesi 1 degerini ald�g� icin sali direk bir fazlas�n� yani 2 al�r
	carsamba = 5,
	persembe, //carsamba 5 degerini aldigi i�in persembe 1 fazlas�n� yani 6 al�r
	cuma = 10,
	cmt, //cmt 11 degerini alir
	pzr //pzr 12 degerini alir
	
};

int main()
{
	printf("%d - %d - %d - %d - %d - %d - %d ",pazartesi,sali,carsamba,persembe,cuma,cmt,pzr);
		   //1 -  2 -  5 -  6 - 10 - 11 - 12
return 0;		
}
