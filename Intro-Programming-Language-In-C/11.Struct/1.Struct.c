//yapılar(struct)
//structın amacı aynı bilgilere sahip bireyler ya da nesneler için ayri ayri degisken tutmak yerine aynı degiskeni bi kere tanımlayıp hepsi için uygulayabilmeye yarar.
#include<stdio.h>
int main(void)
{
	struct{
		int year; 
		int month;
 		int day;		
	} birth_day; //birthday ana degiskenine 3 degisken ekledik ve kolay bir sekilde dogum gününü yazdirdik;
	
	printf("Enter your birthday");
	printf(" In MM-DD-YYYY FORMAT");
	
	scanf("%d ",&birth_day .month);
	scanf("%d" ,&birth_day .day);
	scanf("%d" ,&birth_day .year);
	
							
	printf("your birthday is:");
	printf("%d / %d / %d" ,birth_day.month ,birth_day.day ,birth_day.year);
	
return 0;	
}
