#include<stdio.h>

int main()
{
	int i[10] , j;
	int *ptr;
	
	for(j = 0; j < 10 ; j++)
	{
		i[ j ] = j;  //bu d�ng� ile i dizisinin elemanlar�n� atad�k
					// i[10]={1,2,3,4,5,6,7,8,9};
	}
	
ptr = i;
printf("1. ekran ciktisi;\n");
for(j = 0 ; j < 10; j++)
{
	printf("%d\n" ,*ptr); //diziyi yazd�r�yoruz
	ptr++; //pointerin tuttu�u adres de�i�iyor. pointer�n tuttu�u adres 10 elamann ileri gidiyor
}
printf("2. ekran ciktisi :%d\n\n" ,*(ptr-1));//pointerin adresi dizinin ilk elam�n�n adresinden 10 eleman ilere gidiyor dizi zaten 10 elamanl� oldu�u i�in bir ��karmam�z gerekiyor
										  //b�ylece dizinin son eleman�na ula�abiliyoruz.





printf("3. ekran ciktisi;\n");
ptr = i;//kar���kl�k olmas�n diye dizinin ilk adresini tekrar pointere at�yoruz.
for(j =0 ; j < 10; j++ )
{
	printf("%d\n" ,*(ptr+j));
	//adres de�i�tirmek yerine her seferinde ptryi d�ng�n�n sayac�n� ekleyip yazarsak pointerin adresi de�i�mez
	//*(ptr+0)-->i[0] *(ptr+1) -->*i[1] diye devam eder  
	
}
printf("4. ekran ciktisi: %d\n\n" ,*ptr); 
//sonuc olarak adres de�i�medi�i i�in 4. ��kt�da pointer dizinin ilk eleman�n� yazacak

}
