#include<stdio.h>

int main(){
	
	int  A[ 5 ][ 8 ];
	int i , j;
	
	for(i = 0 ; i < 5; i++){
		
		for(j = 0; j < 8; j++){
			
			printf("%d numarali ogrencinin %d numarali sinavini giriniz :" ,(i+1) ,(j+1) );
			scanf("%d" ,& A[ i ][ j ]);
		}
	}
	
		for(i = 0 ; i < 5; i++){
			
			for(j = 0; j < 8; j++){
				printf("%3d" , A[ i ][ j ]);
			}
	printf("\n");	
		}
return 0;		
}

