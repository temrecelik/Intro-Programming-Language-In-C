#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n , i , *ptr , sum = 0;
	
	printf("Eleman sayisini giriniz :");
	scanf("%d" ,&n);
	
	ptr = (int *)malloc(n * sizeof(int));
	
	
	printf("Dizi elemanlarini giriniz :\n");
	
	for(i = 0; i < n ; i++)
	{
		scanf("%d" ,& *(ptr+i));
		sum = sum + *(ptr+i);
	}
	
	printf("toplam = %d" ,sum);
	getchar();
	getchar();
	return 0;
 }
 
 
 
 
 
 
 
 
 
