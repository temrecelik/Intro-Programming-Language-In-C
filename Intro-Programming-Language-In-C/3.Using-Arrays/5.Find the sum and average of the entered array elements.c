#include<stdio.h>
#define Number 8
int main(){

	int i;
	float Array[Number];
	float Total=0,Average;
	printf("Please enter %d elements:\n" ,Number);

	for(i = 0 ; i < Number ; i++){
		scanf("%f" ,&Array[i]);
		Total = Total +Array[i];
	}	
	
	Average =Total/8;

printf("Sum of array elements: %f\n" ,Total);
printf("Average of array elements: %f\n" ,Average);

return 0;	
}	
	
	

