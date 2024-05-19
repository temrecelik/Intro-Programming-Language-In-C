#include<stdio.h>
#define SIZE 5

int main() {
	int i ;
	int A[ SIZE ];

	printf("Enter %d array elements: \n" ,SIZE);

	for(i = 0 ; i < SIZE ; i++){
		
		scanf("%d" ,& A[ i ] ) ; 
		
	}	
	for(i = 0; i < SIZE ; i++){
		
		printf("A[%d] = %d\n" , i, A[i]);
	}
}



