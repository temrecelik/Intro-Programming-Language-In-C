 #include<stdio.h>
 #include<stdlib.h>
 
 struct node{ //node nesne isimli bir struct tanımladık ve etiket kullandık
 	int data;
 	struct node *sonraki; //aynı strcutın içinde bir sonraki dugume geçmek için sonraki isimli bir pointer tanımladık
 };
 
 int main() //daha sonra ana fonksiyonumuzu yazdık 		
 {
 	struct node *ilkdugum=NULL; //node etiketini kullanarak ilkdügümümüzü ilkdugum pointeri ile olusturduk
 	ilkdugum=(node*)malloc(sizeof(node)); //hafızadan ilkdugum için malloc fonksiyonu yardımıyla alan açtık
 	ilkdugum->data=20;//ilk dugumde tutulacak veriyi girdik
 	struct node *ikincidugum; //daha sonra ikinci dugum pointerini tanımladık
	ikincidugum=(node*)malloc(sizeof(node));//ikinci dugum pointeri için de bellekten yer ayırdık
	ilkdugum->sonraki=ikincidugum;//daha sonra sonraki pointeri ile ilkdügümü ikincidugume bagladık
	ikincidugum->data=40;//ikincidugumde tutulacak veriyi girdil
	ikincidugum->sonraki=NULL;//daha fazla veri tutmak istemedik ve ikincidugumden sonra null karakter girdik
	
	printf("birinci dugumun tuttugu deger: %d\n" ,ilkdugum->data);//ilkdugumde tutulan veriyi yazdırdık
	printf("ikinci dugumun tuttugu deger: %d" ,ikincidugum->data);//ikinci dugumde tutulan veriyi yazdırdık

return 0; 	
 }
