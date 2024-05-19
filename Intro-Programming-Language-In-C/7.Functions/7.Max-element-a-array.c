#include <stdio.h>

int maksimum(int gmz[], int buyukluk){
	
	int i, max;
	max=0;
	
	for(i=0; i<buyukluk; i++)
	{
		if(gmz[i]>max)
		max=gmz[i];
	}
	return max;
}

int main(){
	
	int dizi[8];
	int i;
	
	for(i=0;i<8;i++)
	{
		printf("%d . elemani giriniz : ",(i+1));
		scanf("%d",&dizi[i]);
		
	}
	printf("maksimum deger : %d",maksimum (dizi,8));
}
