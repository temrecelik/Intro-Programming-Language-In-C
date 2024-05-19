#include<stdio.h>

int main(){


int hesapno;
char ad[30];
double bakiye;

FILE *myfile;
myfile=fopen("musterimreala.dat" ,"w");
if(myfile==NULL)
{
	printf("Dosya açýlmadý");
}
else
{
	printf("--ISLEMI SONLANDIRMAK ICIN CTRL+Z GIRINIZ--\n");//ctr+< girine kadar istedðimiz kadar kiþinin verisini girebiliriz.
	printf("Hesap no,\n");;
	printf("AD,\n"); 
	printf("Bakiye;\n"); 
	scanf("%d",&hesapno);
	scanf("%s" ,ad);
	scanf("%lf" ,&bakiye);
	
}
while(!feof(stdin))
{
	fprintf(myfile,"%d %s %.2Lf\n",hesapno,ad,bakiye);
	scanf("%d%s%lf" ,&hesapno,ad,&bakiye);
}
fclose(myfile);
return 0;
}
