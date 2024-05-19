#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int A[ 100 ];
	int B[ 100 ][ 100 ];
	int n , i , satir , sutun ,j , x;
printf("Dizinin eleman sayisini giriniz :");
scanf("%d" ,&n);

for(i = 0; i < n; i++){


printf("Dizinizin %d. elemanini giriniz :" ,(i+1));
scanf("%d" ,&A[ i ]);
}

printf("Matrisin satir sayisini giriniz :");
scanf("%d" ,&satir);

printf("Matrisin sutun sayisini giriniz:");
scanf("%d" ,&sutun);


if(n % satir == 0 && n % sutun == 0 ){
	x=0;
	for(i = 0; i < satir; i++){
		for(j = 0; j < sutun; j++){
			
			B[ i ][ j ] = A[ x ];
			x++;
		}
	}
	for(i = 0; i < satir; i++ ){
		for(j = 0; j < sutun; j++){
			printf("%3d" ,B[ i ][ j ]);
		}
	printf("\n");
	}
}
else{

 printf("Dizi eleman sayisi satir ve sutuna tam bolunnmelidir");
}
return 0;
}
