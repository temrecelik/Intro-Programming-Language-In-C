#include<stdio.h>

enum hafta
{
	bos, //enumda haftanın günleri dizi gibi yazılıyor bu nedenle ilk index 0 oluyor.bu nedenle ilk elemana boş yazdık ki pazartesi 1 olsun
	pzt, //yani enum kullanarak haftanın günlerinin sırasını belirtmiş olduk
	sali,  
	crs,
	prs,
	cm,
	cmt,
	pz
	
};
int main()
{
	enum hafta gun; //ana fonksiyonda bir gun diye bir enum degiskeni tanımladık
	gun=sali;		//degiskene sali gününü attık
	printf("%d" ,gun); //degiskeni yazdırınca artık salinin haftanın kaçıncı günü olduğunu yazacak.
	
return 0;	
}
