#include<stdio.h>

int main()
{
	int hesapno;
	char ad[40];
	double bakiye;
	
	FILE *mfptr;
	mfptr=fopen("dosya.dat" ,"r");
	if(mfptr == NULL)
	{
		printf("dosya acýlmadý");
	}
	else{
		printf("hesapno - ad - bakiye");
		fscanf(mfptr,"%d%s%lf",&hesapno,ad,&bakiye);

	while(!feof(mfptr))
	{
		printf("%-10d%-13s%7.2f\n",hesapno,ad,bakiye);
		fscanf(mfptr,"%d%s%lf",&hesapno,ad,&bakiye);
	}
	fclose(mfptr);	
	}
return 0;	
}
