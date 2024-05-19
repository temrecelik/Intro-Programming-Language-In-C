#include<stdio.h>

int main(){


int hesapno;
char ad[30];
double bakiye;

FILE *myfile;
myfile=fopen("musterimreal.dat" ,"w");
if(myfile==NULL)
{
	printf("Dosya açýlmadý");
}
else
{
	printf("--ISLEMI SONLANDIRMAK ICIN CTRL+Z GIRINIZ--\n");
	printf("Hesap no:"); scanf("%d",&hesapno);
	printf("AD:"); scanf("%s" ,ad);
	printf("Bakiye:"); scanf("%lf" ,&bakiye);
}
while(!feof(stdin))
{
	fprintf(myfile,"%d %s %.2Lf\n",hesapno,ad,bakiye);
	scanf("%d%s%lf" ,&hesapno,ad,&bakiye);
}
fclose(myfile);
return 0;
}
