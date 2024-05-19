#include<stdio.h>

void arttir(int);

int main(void)
{
	int i;
	i=5;
	printf("oncesi : %d\n" ,i);
	arttir(i);
	printf("sonrasi : %d\n" ,i);
	
	
}

void arttir(int k){
	
	k++;
	printf("%d\n" ,k);
	
}
