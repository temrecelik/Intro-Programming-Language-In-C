/*
--rastgele eri�imli dosyalar--
>istenilen kayda di�er kay�tlar �zerinde arama yapmadan eri�imi sa�larlar.
>dosya i�indeki kay�tlara anl�k eri�im sa�larlar.
>yeni veri mevcut veriyi bozmadan eklenebilir.
>Daha �nce saklanan kay�t �zerine yaz�lmadan g�ncellenebilir veya silinebilir.
>sabit kay�t uzunlu�u kullan�larak uygulan�r
	not:s�ral� eri�imli dosyalada sabit kay�t uzunlu�u yoktur.
>rasgele er�imli dosyadaki veri bi�imlendirilmemi�("raw bytes") olarak saklan�r.
>ayn� tipteki t�m veriler �rne�in int tipi gibi ayn� miktarda haf�za alan� kullan�r.
>ayn� tipteki kay�tlar ayn� uzunluktad�r.
>rasgele dosyalar�n i�eri�i insanlar taraf�ndan okunabilir de�ildir.

>bi�ilendirmesiz I/o fonksiyonlar�;
	fwrite : haf�zan�n bir b�lgesinden dosyaya bayt transferi yapar.
	fread  : dosyadan haf�zan�n bir b�lgesine bayt transferi yapar.
	
�rne�in;
fwrite(&number,sizeof(int),1,myPtr);
	&number:baytlar�n kendisinden transfer edilece�i yer yani haf�zada bir yer
	sizeof(int):transfer edilecek bayt say�s�
	�rnek olarak 1 girilirse diziler i�in dizinin bir elaman�n�n transfer edilmesi
	myPtr: dosyay� g�steren pointer
	
	>struct veri yap�s�n� dosyaya yazd�rma �ekli;
		-fwrite(&myObject,sizeof(struct myStruct),1,myPtr);	
		-sizeof: nesnenin kaplad��� haf�za miktar�n� g�sterir.
		
	>birden fazla dizi elaman� yazd�rmak i�in;
		-ilk parametre diziyi g�steren pointer olmal�d�r.
		-���nc� parametrede de yazd�r�lacak elaman say�s� belirtilmelidir.				
