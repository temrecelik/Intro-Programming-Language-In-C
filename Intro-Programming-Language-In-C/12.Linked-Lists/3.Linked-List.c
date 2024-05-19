 #include<stdio.h>
 #include<stdlib.h>
 
 struct node{ //node nesne isimli bir struct tan�mlad�k ve etiket kulland�k
 	int data;
 	struct node *sonraki; //ayn� strcut�n i�inde bir sonraki dugume ge�mek i�in sonraki isimli bir pointer tan�mlad�k
 };
 
 int main() //daha sonra ana fonksiyonumuzu yazd�k 		
 {
 	struct node *ilkdugum=NULL; //node etiketini kullanarak ilkd�g�m�m�z� ilkdugum pointeri ile olusturduk
 	ilkdugum=(node*)malloc(sizeof(node)); //haf�zadan ilkdugum i�in malloc fonksiyonu yard�m�yla alan a�t�k
 	ilkdugum->data=20;//ilk dugumde tutulacak veriyi girdik
 	struct node *ikincidugum; //daha sonra ikinci dugum pointerini tan�mlad�k
	ikincidugum=(node*)malloc(sizeof(node));//ikinci dugum pointeri i�in de bellekten yer ay�rd�k
	ilkdugum->sonraki=ikincidugum;//daha sonra sonraki pointeri ile ilkd�g�m� ikincidugume baglad�k
	ikincidugum->data=40;//ikincidugumde tutulacak veriyi girdil
	ikincidugum->sonraki=NULL;//daha fazla veri tutmak istemedik ve ikincidugumden sonra null karakter girdik
	
	printf("birinci dugumun tuttugu deger: %d\n" ,ilkdugum->data);//ilkdugumde tutulan veriyi yazd�rd�k
	printf("ikinci dugumun tuttugu deger: %d" ,ikincidugum->data);//ikinci dugumde tutulan veriyi yazd�rd�k

return 0; 	
 }
