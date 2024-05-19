#include<stdio.h>
int fonk(int* ,int*);
int main(){
int i ,j; 
printf("i: "); scanf("%d" ,&i);
printf("j: "); scanf("%d" ,&j);

fonk( &i , &j);
	
	printf("i: %d\n" ,i);
	printf("j: %d" ,j);
	
}
int fonk( int *sayi1 , int *sayi2){
int a;
a = *sayi1;
*sayi1 = *sayi2;
*sayi2 = a;	
}

