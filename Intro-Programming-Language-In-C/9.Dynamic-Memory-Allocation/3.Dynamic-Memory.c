#include <stdio.h>
//fonksiyondan pointer yard�m�yla birden fazla de�er dondurme
int bolme(int , int , int *);

int main()
{
	int bolunen,	
		bolen,
		bolum,
		kalan;
		
	bolunen = 13; 
	bolen = 4;
	printf("%d / %d ;\n" , bolunen , bolen);
	bolum = bolme(bolunen , bolen , &kalan);
	printf("bolum : %d -- kalan : %d " ,bolum , kalan);
	

}

int bolme (int bolunen , int bolen , int *kalan)
{
	*kalan= bolunen % bolen;
	
	return bolunen / bolen;
	
}
