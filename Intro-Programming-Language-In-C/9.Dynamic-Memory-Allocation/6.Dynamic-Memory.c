#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *dizi;
	int elemansayisi;
	int i;
	
	printf("eleman sayisi giriniz : ");
	scanf("%d" ,&elemansayisi);
	
	dizi = (int*)malloc(elemansayisi * sizeof(int)); // --> molloc ile farkl� degerler tutuluyor her defas�nda haf�zan�n farkl� yerlerinden (elemansay�s�-1) X 4 birim yerlik alan a��yor ve o alanlarda o anda tutulan degerleri al�yor
	//ya da 																																	//integer her eleman 4 byte kaplar
	//dizi = (int*)calloc(elemansayisi ,sizeof(int)); //--> colloc hepsinde s�f�r tutuyor
	
	for(i = 0; i < elemansayisi ; i++)
	{
		printf("adres: %d tutulan deger: %d\n" ,&dizi[i] , dizi[i]);
	}
	
	free(dizi);
}
