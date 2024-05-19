#include <stdio.h>

 void func( int matrix[][3]){
 		
		int i,j;

		for(i=2;i>=0;i--){
			for(j=2;j>=0;j--){
 		printf("%4d",matrix[i][j]);
 		
 }
 printf("\n");
}
}
int main(){
	int matrix[3][3];
	int i,j;

for(i=0;i<3; i++){
	for(j=0;j<3; j++){
		scanf("%d" ,&matrix[i][j]);
		
	}
	
}
	func(matrix);
}
