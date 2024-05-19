
//nesnelerin(kiþilerin) degiskenlerinin degerleri baslangýçta tanýmlanabilir

//etiket kullanmadan baslangýç degeri tanýmlama

#include<stdio.h>
int main(void)
{
	struct {
		char name[40];
		int length;
	}person ={"Ali" ,167};
printf("person name:%d and person length:%d",person.name,person.length);

return 0;	
}
