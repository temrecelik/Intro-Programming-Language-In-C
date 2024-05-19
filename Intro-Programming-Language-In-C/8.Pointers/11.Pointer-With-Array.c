#include<stdio.h>

int main()
{
	int i[10] , j;
	int *ptr;
	
	for(j = 0; j < 10 ; j++)
	{
		i[ j ] = j;  //bu döngü ile i dizisinin elemanlarýný atadýk
					// i[10]={1,2,3,4,5,6,7,8,9};
	}
	
ptr = i;
printf("1. ekran ciktisi;\n");
for(j = 0 ; j < 10; j++)
{
	printf("%d\n" ,*ptr); //diziyi yazdýrýyoruz
	ptr++; //pointerin tuttuðu adres deðiþiyor. pointerýn tuttuðu adres 10 elamann ileri gidiyor
}
printf("2. ekran ciktisi :%d\n\n" ,*(ptr-1));//pointerin adresi dizinin ilk elamýnýn adresinden 10 eleman ilere gidiyor dizi zaten 10 elamanlý olduðu için bir çýkarmamýz gerekiyor
										  //böylece dizinin son elemanýna ulaþabiliyoruz.





printf("3. ekran ciktisi;\n");
ptr = i;//karýþýklýk olmasýn diye dizinin ilk adresini tekrar pointere atýyoruz.
for(j =0 ; j < 10; j++ )
{
	printf("%d\n" ,*(ptr+j));
	//adres deðiþtirmek yerine her seferinde ptryi döngünün sayacýný ekleyip yazarsak pointerin adresi deðiþmez
	//*(ptr+0)-->i[0] *(ptr+1) -->*i[1] diye devam eder  
	
}
printf("4. ekran ciktisi: %d\n\n" ,*ptr); 
//sonuc olarak adres deðiþmediði için 4. çýktýda pointer dizinin ilk elemanýný yazacak

}
