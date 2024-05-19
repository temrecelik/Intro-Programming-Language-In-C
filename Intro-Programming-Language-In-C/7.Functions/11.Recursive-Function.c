#include<stdio.h>

int ucebolunen( int x);
int main(){

	int n;
	printf("Bir sayi giriniz :");
	scanf("%d" ,&n);
	ucebolunen(n);

	}
int ucebolunen( int x){
		
	if(x>0)
	{
		if(x%3==0)
	printf("%d\n" ,x);
	return ucebolunen(x-1);	
    }
    else
    return 0;
	}
	

