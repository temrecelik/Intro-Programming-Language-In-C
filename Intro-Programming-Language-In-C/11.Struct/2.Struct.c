 //struct i�inde struct
 #include<stdio.h>
 int main(void)
 {
 	struct{ //person adli struct� a��yoruz person struct� bir adet string ve lenght degiskenin tutuyor
 		char name[40];
 		int lenght;
 		struct{ //daha sonra person struct'� i�inde bornInformation adli baska bir struct daha a��yoruz
 			int year; //bu struct da year - month - day degiskenlerini tutuyor
 			int month;
 			int day;
		 } bornInformation;
	 }person;
	 
	 printf("Your name:");
	 scanf("%s", person.name);
	 printf("Your lenght:");
	 scanf("%d",&person.lenght);
	 printf("Your birthday:");
	 scanf("%d%d%d",&person.bornInformation.month,&person.bornInformation.day,&person.bornInformation.year);
	 				//ikinci struct i�in kullan�cadan veri isterken ya da veriyi yazdirirken "ilkstructismi.�kincistrcutismi.degisken " seklinde istenmelidir
	 				//ayn� �ekilde struct i�inde birden fazla struct olsa bile birincistruct.ikincistrcut.���nc�strcut.....degisken seklinde gitmelidir
	 printf("Your name: %s\n" ,person.name);
	 printf("lenght: %d\n" ,person.lenght);
	 
	 printf("your birthday : %d/%d/%d\n" ,person.bornInformation.month,person.bornInformation.day,person.bornInformation.year);
	
return 0;	 
 }
