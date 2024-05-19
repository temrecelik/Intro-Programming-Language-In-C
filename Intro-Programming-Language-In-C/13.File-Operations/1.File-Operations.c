/* 
>Dosya sonunda end-of-file i�aret�isi(pointeri) bulunur ya da dosya belirli bir bayt degerinde sonlan�r.
>dosya a��ldg�nda bir stream olu�turulur.stream dosya ile program aras�nda bir ileti�im kanal� olu�turur.
>eger bir dosya a�mak istersek dosyan�n veri tipinde bir pointer d�nd�rmemiz gerekir

	�rnek dosya pointerleri;
		-stdin >> klavyeden veri okumay� sa�lar.
		-stdout >>ekrana veri yazd�rmay� sa�lar
		-stderr >> (standart error-ekran-)
		
Dosya yap�s�:Bir dosya a��ld��nda dosyan�n veri yap�s�n� i�aret eden bir pointer d�nd�r�l�r
Dosya tan�mlay�c�s�:��letim sisteminin a��k dosya tablosunda bir indistir.
Dosya kontrol blo�u(FCB):Her dizi eleman�nda bulunur sistem bunu kullanarak dosyay� y�netir.

Not:Giri�,��k�� ve hata i�lemleri -stdin- , -stdout- , -stderrr- pointerleriyle de�i�tirilir

***oku/yaz fonksiyonlar� giri� k�t�phanesinde bulunur***

1-)fgetc
-dosyadan bir karakter okur
-parametre olarak bir dosya pointeri al�r.
-fgetc(stdin) getchar ile ayn� i�i yapar
	   stdin->parametredir

2-)fputc
-Dosyaya bir karakter yazar
-parametre olarak bir dosya pointeri ve yaz�lacak olan karakteri al�r
-fputc('a',stdout) ile putchar('a') ayn� anlama gelir.

3-)fgets
-dosyadan bir sat�r okur

4-)fputs
-dosyaya bir sat�r yazar.

5-)fscanf / fprintf
-scanf ve printf fonksiyonlar�n�n dosya i�lemlerindeki kar��l�klar�d�r.

Not:C herhangi bir veri yap�s�n� kullanmay� zorunlu k�lmaz
kullan�c� kendi veri yap�s�n� kendisi belirler.

6-)FILE *myPtr;
-myPtr isminde bir dosya pointeri tan�mlar

7-)myPtr=fopen("myFile.dat" , openmode(dosyan�n a��l�� modu) );
-fopen fonksiyonu belirten dosyay� g�steren bir dosya pointeri d�nd�r�r
-iki parametre al�r ilki >>a��lacak dosya ikincisi >>dosyan�n a��l�� modu
-e�er dosya a�ma ba�ar�s�z olursa fonksiyon NULL d�nd�r�r.

8-)fprintf
-dosyay� yazd�rmak i�in kullan�l�r
-printf den fark� ilk parametresi yaz�lacak dosyay� i�aret eden pointerd�r.

9-)feof(dosya pointeri)
-e�er end-of-file pointeri belirtilen dosya i�in ayarlanm�� ise true d�nd�r�r.

10-)fclose(dosya pointeri)
-belirtilen dosyay� kapat�r.
-program sonland�r�ld���nda otomatik olarak ger�ekle�tirilir

11-)fscanf
scanf gibidir ancak ilk parametre olarak dosya pointerini al�r
fsanf(myPtr,"%d%s%f",&mylnt,mystring,&myfloat);

12-)Dosya konumu pointeri;
-okunacak veya yaz�lacak sonraki bayt say�s�n� belirtir
-pointer de�ildir bir tamsay�d�r(bayt konumunu belirten bir say�)
-bayt ofseti denir

13-)rewind(myptr)
-dosya konumu pointerini dosyan�n bas�na al�r(bayt 0)
not;
program bir veya daha fazla dsoya �zerinde i�lem ger�ekle�tirebilir.
her dosyan�n farkl� bir ismi olmal� ve her birinin kendine �zel i�aretl�isi olmal�d�r.

****dosya a�ma modlar�****

1-)r
-okumak i�in bir dosya a�

2-)w
-yazmak i�in bir dosya olu�turun. Dosya zaten varsa, mevcut i�eri�i at�n.

3-)a
-ekle;dosyan�n sonuna yazmak i�in bir dosya a� veya olu�tur

4-)r+
-g�ncelleme i�in bir dosya a��n (okuma ve yazma)

5-)w+
-g�ncelleme i�in bir dosya olu�turun. dosya zaten varsa, mevcut i�eri�i at�n

6-)a+
-ekleme;bir dosya olu�turma veya olu�turma veya g�ncelleme;yazma dosyan�n sonunda yap�l�r.











