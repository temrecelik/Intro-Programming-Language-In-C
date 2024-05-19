#include<stdio.h>
 
 enum month_list{
 	january=1,february,march,april,
 	may , june , july , august,
 	september ,october, november, december
 };
 
 typedef enum month_list months;
 
 void writeMonthName( months );
 
 int main(void)
 {
 	months thisMonth = november;
 	printf(" Month -%d is " ,thisMonth);
 	
 writeMonthName(thisMonth);
 
return 0; 	
 }
void writeMonthName(months nameOfMonth)
{
	switch(nameOfMonth)
	{
		case january:printf("January\n"); break;
		case february:printf("February\n"); break;
		case march:printf("March\n"); break;
		case april:printf("April\n"); break;
		case may:printf("May\n"); break;
		case june:printf("June\n"); break;
		case july:printf("July\n"); break;
		case august:printf("August\n"); break;
		case september:printf("September\n"); break;
		case october:printf("October\n"); break;
		case november:printf("November\n"); break;
		case december:printf("December\n"); break;
	}
 } 
 
 
