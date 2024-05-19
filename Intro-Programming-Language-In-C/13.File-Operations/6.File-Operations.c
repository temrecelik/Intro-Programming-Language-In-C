#include<stdio.h>

int main(void)
{
	int secim ,hesapno;
	double bakiye;
	char ad[40];
	
	FILE *mfptr;
	mfptr=fopen("musterilerke.dat" ,"w");
	

		printf("secim yapiniz\n 1-)hesapta para olmayan hesaplar\n 2-)borclu olan hesaplar\n 3-)hesapta para olan hesaplar\n 4-)cikis\n");
		scanf("%d" ,&secim);
	
	while( secim !=4)
	{
		fscanf(mfptr,"%d%s%lf" ,&hesapno,ad,&bakiye);
		switch(secim){
		
		
		case 1:
			printf("para olmayan hesaplar:\n");
			while(!feof(mfptr))
			{
				if(bakiye==0)
					printf("%-10d%-13s%7.2f\n" ,hesapno,ad,bakiye);
				fscanf(mfptr,"%d%s%lf",&hesapno,ad,&bakiye);
			}
		
		case 2:
			printf("borclu hesaplar:\n");
			while(!feof(mfptr))
			{
				if(bakiye<0)
					printf("%-10d%-13s%7.2f\n" ,hesapno,ad,bakiye);
				fscanf(mfptr,"%d%s%lf",&hesapno,ad,&bakiye);	
			}	
		case 3:
			printf("para olan hesaplar:\n");
			while(!feof(mfptr))
			{
				if(bakiye>0)
					printf("%-10d%-13s%7.2f\n" ,hesapno,ad,bakiye);
				fscanf(mfptr,"%d%s%lf",&hesapno,ad,&bakiye);	
			}
		break;	
}
	
	rewind(mfptr);
	scanf("%d" ,&secim);
}
printf("Program sonlandý\n");
fclose(mfptr);	
}

