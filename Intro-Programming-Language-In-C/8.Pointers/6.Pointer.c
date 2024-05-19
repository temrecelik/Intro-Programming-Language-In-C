//pointerlar genelde sabit boyutta yer kaplar.Mesela 32 bit bir sistemde genellikle pointerlar 32 bit olur.

#include<stdio.h>
int main()
{

double i;
double *p;
p = &i;
										//sizeof() fonksiyonu ile bir değişkenin ya da pointerin boyutunu byte biçiminden buluruz

printf("i nin boyutu : %d\n" ,sizeof(i)); //double karakter ->print 8 byte->64 bit
printf("p pointerinin boyutu : %d" ,sizeof(p)); //print 4 byte -> 32 bit
												
getchar();

return 0;
}
