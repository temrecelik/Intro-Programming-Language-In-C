#include <stdio.h>

enum aylarlistesi{
	ocak=1,subat,mart,nisan,mayis,haziran,temmuz,agustos,eylul,ekim,kasim,aralik
}; //bir adet enum girdik ayları tutan

typedef enum aylarlistesi enumututandegisken; //tyedef kullanarak enum tipini enumututandegisken ismi ile tanimladik ve aylar listesini tutyor

void ayinisminiyaz(enumututandegisken);//fonksiyon protatipi oluşturduk paremetrede aslında veri tipi yani enum yaziyor

int main(void) //ana fonksiyonu yazdik
{
	enumututandegisken buay; //bir adet buay isimli enum degiskeni atatik 
	buay=kasim;//bu degiskene kasim degerini atadik
	printf("bu ay %d dir" ,buay); //artik kasim ayinin kaçıncı ay oldugunu yazacak
	
ayinisminiyaz(buay);//burada kasim ayini fonksiyona gönderdik
}
void ayinisminiyaz(enumututandegisken buayinadi){ //fonksiyon enum tipinde bir parametreli bir fonksiyon
	switch(buayinadi){
	
		case ocak: printf("ocak");
		case subat: printf("subat");
		case mart:	printf("mart");
		case kasim: printf("kasim");} //switch case ile buay kasimi tuttugu içi kasimi yazdirdi
		
}
