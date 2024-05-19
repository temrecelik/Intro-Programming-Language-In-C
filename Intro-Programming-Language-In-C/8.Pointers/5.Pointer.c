//Bir pointer herhangi bir deðiþkenin adresine program boyunca gidebilir.
#include<stdio.h>
int main()
{
	int x , y, z ;
	int *p;
	x = 41;
	y = 12;
	
	p = &x; //ilk olarak x in adresine gitti ve x in deðerini çekti.
	z = *p; //Pointeri yýldýzýyla kullanarak x in deðerini yeni bir deðiþkene attýk 
	printf("Z nin ilk degeri : %d\n" , z);
	
	p = &y; //ikinci olarak y nin adresini gitti ve y nin deðerini çekti.
	z = *p;//pointeri yýldýzýyla kullanarak y nin deðerini yeni bir deðiþkene attýk
	printf("Z nin ikinci degeri : %d\n" ,z);
	
}
