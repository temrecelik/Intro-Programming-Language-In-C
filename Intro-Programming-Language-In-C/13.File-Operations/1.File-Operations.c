/* 
>Dosya sonunda end-of-file iþaretçisi(pointeri) bulunur ya da dosya belirli bir bayt degerinde sonlanýr.
>dosya açýldgýnda bir stream oluþturulur.stream dosya ile program arasýnda bir iletiþim kanalý oluþturur.
>eger bir dosya açmak istersek dosyanýn veri tipinde bir pointer döndürmemiz gerekir

	örnek dosya pointerleri;
		-stdin >> klavyeden veri okumayý saðlar.
		-stdout >>ekrana veri yazdýrmayý saðlar
		-stderr >> (standart error-ekran-)
		
Dosya yapýsý:Bir dosya açýldðýnda dosyanýn veri yapýsýný iþaret eden bir pointer döndürülür
Dosya tanýmlayýcýsý:Ýþletim sisteminin açýk dosya tablosunda bir indistir.
Dosya kontrol bloðu(FCB):Her dizi elemanýnda bulunur sistem bunu kullanarak dosyayý yönetir.

Not:Giriþ,çýkýþ ve hata iþlemleri -stdin- , -stdout- , -stderrr- pointerleriyle deðiþtirilir

***oku/yaz fonksiyonlarý giriþ kütüphanesinde bulunur***

1-)fgetc
-dosyadan bir karakter okur
-parametre olarak bir dosya pointeri alýr.
-fgetc(stdin) getchar ile ayný iþi yapar
	   stdin->parametredir

2-)fputc
-Dosyaya bir karakter yazar
-parametre olarak bir dosya pointeri ve yazýlacak olan karakteri alýr
-fputc('a',stdout) ile putchar('a') ayný anlama gelir.

3-)fgets
-dosyadan bir satýr okur

4-)fputs
-dosyaya bir satýr yazar.

5-)fscanf / fprintf
-scanf ve printf fonksiyonlarýnýn dosya iþlemlerindeki karþýlýklarýdýr.

Not:C herhangi bir veri yapýsýný kullanmayý zorunlu kýlmaz
kullanýcý kendi veri yapýsýný kendisi belirler.

6-)FILE *myPtr;
-myPtr isminde bir dosya pointeri tanýmlar

7-)myPtr=fopen("myFile.dat" , openmode(dosyanýn açýlýþ modu) );
-fopen fonksiyonu belirten dosyayý gösteren bir dosya pointeri döndürür
-iki parametre alýr ilki >>açýlacak dosya ikincisi >>dosyanýn açýlýþ modu
-eðer dosya açma baþarýsýz olursa fonksiyon NULL döndürür.

8-)fprintf
-dosyayý yazdýrmak için kullanýlýr
-printf den farký ilk parametresi yazýlacak dosyayý iþaret eden pointerdýr.

9-)feof(dosya pointeri)
-eðer end-of-file pointeri belirtilen dosya için ayarlanmýþ ise true döndürür.

10-)fclose(dosya pointeri)
-belirtilen dosyayý kapatýr.
-program sonlandýrýldýðýnda otomatik olarak gerçekleþtirilir

11-)fscanf
scanf gibidir ancak ilk parametre olarak dosya pointerini alýr
fsanf(myPtr,"%d%s%f",&mylnt,mystring,&myfloat);

12-)Dosya konumu pointeri;
-okunacak veya yazýlacak sonraki bayt sayýsýný belirtir
-pointer deðildir bir tamsayýdýr(bayt konumunu belirten bir sayý)
-bayt ofseti denir

13-)rewind(myptr)
-dosya konumu pointerini dosyanýn basýna alýr(bayt 0)
not;
program bir veya daha fazla dsoya üzerinde iþlem gerçekleþtirebilir.
her dosyanýn farklý bir ismi olmalý ve her birinin kendine özel iþaretlçisi olmalýdýr.

****dosya açma modlarý****

1-)r
-okumak için bir dosya aç

2-)w
-yazmak için bir dosya oluþturun. Dosya zaten varsa, mevcut içeriði atýn.

3-)a
-ekle;dosyanýn sonuna yazmak için bir dosya aç veya oluþtur

4-)r+
-güncelleme için bir dosya açýn (okuma ve yazma)

5-)w+
-güncelleme için bir dosya oluþturun. dosya zaten varsa, mevcut içeriði atýn

6-)a+
-ekleme;bir dosya oluþturma veya oluþturma veya güncelleme;yazma dosyanýn sonunda yapýlýr.











