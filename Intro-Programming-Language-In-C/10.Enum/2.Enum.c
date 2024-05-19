#include<stdio.h>
//iki farklý enum degeri ayný deðeri tutabilir

enum durum{
	calisiyor=1,
	calismiyor=0, //calismiyor ve beklemede görüldüðü gibi ayný degeri tutuyor
	beklemede=0
	
};

int main()
{
	printf("%d - %d - %d" ,calisiyor,calismiyor,beklemede);

return 0;	
}
