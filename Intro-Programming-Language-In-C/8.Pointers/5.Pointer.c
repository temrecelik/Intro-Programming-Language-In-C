//Bir pointer herhangi bir de�i�kenin adresine program boyunca gidebilir.
#include<stdio.h>
int main()
{
	int x , y, z ;
	int *p;
	x = 41;
	y = 12;
	
	p = &x; //ilk olarak x in adresine gitti ve x in de�erini �ekti.
	z = *p; //Pointeri y�ld�z�yla kullanarak x in de�erini yeni bir de�i�kene att�k 
	printf("Z nin ilk degeri : %d\n" , z);
	
	p = &y; //ikinci olarak y nin adresini gitti ve y nin de�erini �ekti.
	z = *p;//pointeri y�ld�z�yla kullanarak y nin de�erini yeni bir de�i�kene att�k
	printf("Z nin ikinci degeri : %d\n" ,z);
	
}
