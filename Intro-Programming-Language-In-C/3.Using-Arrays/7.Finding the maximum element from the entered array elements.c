#include<stdio.h>
int main(){

int max = 0 , Array[10] , i;

printf("Please enter 10 array elements; \n");
for(i = 0; i<10; i++){
	scanf("%d" ,&Array[i]);
	
	if(Array[i] > max)
		max = Array[i];
}
printf("Max element of Array : %d" ,max);

return 0;
}





