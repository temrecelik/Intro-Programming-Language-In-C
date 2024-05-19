/*
--rastgele eriþimli dosyalar--
>istenilen kayda diðer kayýtlar üzerinde arama yapmadan eriþimi saðlarlar.
>dosya içindeki kayýtlara anlýk eriþim saðlarlar.
>yeni veri mevcut veriyi bozmadan eklenebilir.
>Daha önce saklanan kayýt üzerine yazýlmadan güncellenebilir veya silinebilir.
>sabit kayýt uzunluðu kullanýlarak uygulanýr
	not:sýralý eriþimli dosyalada sabit kayýt uzunluðu yoktur.
>rasgele erþimli dosyadaki veri biçimlendirilmemiþ("raw bytes") olarak saklanýr.
>ayný tipteki tüm veriler örneðin int tipi gibi ayný miktarda hafýza alaný kullanýr.
>ayný tipteki kayýtlar ayný uzunluktadýr.
>rasgele dosyalarýn içeriði insanlar tarafýndan okunabilir deðildir.

>biçilendirmesiz I/o fonksiyonlarý;
	fwrite : hafýzanýn bir bölgesinden dosyaya bayt transferi yapar.
	fread  : dosyadan hafýzanýn bir bölgesine bayt transferi yapar.
	
örneðin;
fwrite(&number,sizeof(int),1,myPtr);
	&number:baytlarýn kendisinden transfer edileceði yer yani hafýzada bir yer
	sizeof(int):transfer edilecek bayt sayýsý
	örnek olarak 1 girilirse diziler için dizinin bir elamanýnýn transfer edilmesi
	myPtr: dosyayý gösteren pointer
	
	>struct veri yapýsýný dosyaya yazdýrma þekli;
		-fwrite(&myObject,sizeof(struct myStruct),1,myPtr);	
		-sizeof: nesnenin kapladýðý hafýza miktarýný gösterir.
		
	>birden fazla dizi elamaný yazdýrmak için;
		-ilk parametre diziyi gösteren pointer olmalýdýr.
		-üçüncü parametrede de yazdýrýlacak elaman sayýsý belirtilmelidir.				
