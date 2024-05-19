#include<stdio.h>

int main(){
	
int A[ 2 ][ 3 ] = { 1 , 2 , 3 , 4 , 5 , 6 };
int B[ 2 ][ 3 ] = { 6 , 5 , 4 , 3 , 2 , 1 };
int C[ 2 ][ 3 ];
int i , j;

puts("A matrisi :");

for(i = 0; i < 2; i++){
	
	for(j = 0; j < 3; j++){
	
		printf("%3d" ,A[ i ][ j ]);	
	}
	printf("\n");	
}

puts("B matrisi : ");

for(i = 0; i < 2; i++){
	
	for(j = 0; j < 3; j++){
		 
		 printf("%3d" ,B[ i ][ j ]);
	}
	printf("\n");
}

puts("C matrisi :");

for(i = 0; i < 2; i++){
	
	for(j = 0; j < 3; j++){
		
		C[ i ][j] = A[ i ][ j ] + B[ i ][ j ];
		printf("%3d" ,C[ i ][ j ]);
		
	}
	printf("\n");
}
return 0;
}


