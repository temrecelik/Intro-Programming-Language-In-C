#include<stdio.h>

enum hafta
{
	bos, //enumda haftan�n g�nleri dizi gibi yaz�l�yor bu nedenle ilk index 0 oluyor.bu nedenle ilk elemana bo� yazd�k ki pazartesi 1 olsun
	pzt, //yani enum kullanarak haftan�n g�nlerinin s�ras�n� belirtmi� olduk
	sali,  
	crs,
	prs,
	cm,
	cmt,
	pz
	
};
int main()
{
	enum hafta gun; //ana fonksiyonda bir gun diye bir enum degiskeni tan�mlad�k
	gun=sali;		//degiskene sali g�n�n� att�k
	printf("%d" ,gun); //degiskeni yazd�r�nca art�k salinin haftan�n ka��nc� g�n� oldu�unu yazacak.
	
return 0;	
}
