#include<stdio.h>
//iki farkl� enum degeri ayn� de�eri tutabilir

enum durum{
	calisiyor=1,
	calismiyor=0, //calismiyor ve beklemede g�r�ld��� gibi ayn� degeri tutuyor
	beklemede=0
	
};

int main()
{
	printf("%d - %d - %d" ,calisiyor,calismiyor,beklemede);

return 0;	
}
