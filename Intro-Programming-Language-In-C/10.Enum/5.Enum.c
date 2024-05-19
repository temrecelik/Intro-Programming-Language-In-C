#include <stdio.h>

enum gunler{
	
	pazartesi = 1,
	sali, //pazartesi 1 degerini aldýgý icin sali direk bir fazlasýný yani 2 alýr
	carsamba = 5,
	persembe, //carsamba 5 degerini aldigi için persembe 1 fazlasýný yani 6 alýr
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
