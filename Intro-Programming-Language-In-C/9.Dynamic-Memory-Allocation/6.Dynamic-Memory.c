#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *dizi;
	int elemansayisi;
	int i;
	
	printf("eleman sayisi giriniz : ");
	scanf("%d" ,&elemansayisi);
	
	dizi = (int*)malloc(elemansayisi * sizeof(int)); // --> molloc ile farklý degerler tutuluyor her defasýnda hafýzanýn farklý yerlerinden (elemansayýsý-1) X 4 birim yerlik alan açýyor ve o alanlarda o anda tutulan degerleri alýyor
	//ya da 																																	//integer her eleman 4 byte kaplar
	//dizi = (int*)calloc(elemansayisi ,sizeof(int)); //--> colloc hepsinde sýfýr tutuyor
	
	for(i = 0; i < elemansayisi ; i++)
	{
		printf("adres: %d tutulan deger: %d\n" ,&dizi[i] , dizi[i]);
	}
	
	free(dizi);
}
