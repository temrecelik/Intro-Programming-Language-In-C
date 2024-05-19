#include <stdio.h>

void func(int dizi[]){
	int i;
	for(i=9;i>=0;i--){
		printf("%d\n",dizi[i]);
	}
}
int main(){
	int arr[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	func(arr);
	
	
	printf("islem bitti");
	return 0;
}

